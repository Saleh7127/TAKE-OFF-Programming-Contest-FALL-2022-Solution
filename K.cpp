#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int MAX = 20;
const int MAXN = 5e6 + 5;

ll n, m, cost[2] [MAX], uPro[MAX] [50], dPro[MAX] [50], dp[MAXN];
ll three[MAX];

ll F(int u, int d) {
  ll remainCap = m, pro = 0, mask = 0, onCnt = 0;
  for (int i = 0; i < n; i++) {
    if ((u & (1 << i)) && (d & (1 << i))) {
      mask += 2 * three[i];
    } else if ((u & (1 << i))) {
      mask += three[i];
    }

    if (u & (1 << i)) {
      remainCap -= cost[0] [i];
      ++onCnt;
    }
    if (d & (1 << i)) {
      remainCap -= cost[1] [i];
      ++onCnt;
    }
  }

  if (dp[mask] != -1) return dp[mask];

  for (int i = 0; i < n; i++) {
    if (!(u & (1 << i)) && remainCap >= cost[0] [i]) {
      pro = max(pro,
        F(u | (1 << i), d) + uPro[i] [onCnt]);
    }
  }

  for (int i = 0; i < n; i++) {
    if ((u & (1 << i)) && !(d & (1 << i)) && remainCap >= cost[1] [i]) {
      pro = max(pro,
        F(u , d | (1 << i)) + dPro[i] [onCnt]);
    }
  }

  return dp[mask] = pro;
}

int main( ){
  three[0] = 1;
  for (int i = 1; i < MAX; i++) {
    three[i] = three[i - 1] * 3;
  }

  cin >> n >> m;
  for (int i : {0, 1}) {
    for (int j = 0; j < n; j++) {
      cin >> cost[i] [j];
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 2 * n; j++) {
      cin >> uPro[i] [j];
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 2 * n; j++) {
      cin >> dPro[i] [j];
    }
  }

  memset(dp, -1, sizeof dp);
  cout << F(0, 0) << '\n';
  return 0;
}


