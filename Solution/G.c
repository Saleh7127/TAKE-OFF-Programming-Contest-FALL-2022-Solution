#include <stdio.h>
#include<stdlib.h>
#define  ll long long
ll gcd(ll a, ll b) {if (b == 0)return a; return gcd(b, a % b);}
ll lcm(ll a, ll b) {a = abs(a); b = llabs(b); return (a / gcd(a, b)) * b;}
void solve()
{
    ll n,m,lc=1;
    scanf("%lld %lld",&n,&m);
    for (int i=0;i<m;i++)
    {
      ll tem; scanf("%lld",&tem);
      lc=lcm(tem,lc);
    }
    ll ans=(n/lc);
    printf("%lld\n",ans);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        solve();
    }
    return 0;
}
