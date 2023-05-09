#include<stdio.h>
#define ll long long
#define nl '\n'
const ll mod= 998244353;
ll bigmod(ll a, ll b, ll m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
int main()
{
    ll n,k;
    scanf("%lld %lld",&n,&k);
    if(k==1){
        printf("0\n");
        return 0;
    }
    ///ll ans2 = n*n*k + n*(n+1)/2 - 2*n*n; //without mod

	n%=mod;
	k%=mod;
    ll ans= (n%mod * n%mod * k%mod) + (n%mod * (n+1)%mod * bigmod(2,mod-2,mod))%mod - (2* n%mod * n%mod)%mod;
    ans+=mod;
    ans%=mod;
    printf("%lld\n",ans);
    return 0;
}

