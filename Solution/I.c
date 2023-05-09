#include<stdio.h>
#define ll long long
ll simulate(ll start,ll power,ll n){
	ll ret=0;
	for(ll cur=start,move=power;cur<=n&&move>0;move--,cur+=move)ret+=cur;
	return ret;
}
ll get_ans(ll n, ll k){
	ll mx=0;
	for(ll i=1;i<=k;i++){
		for(ll j=1;j<=n;j++){
			ll cur=simulate(i,j,n);
			if(cur>mx)mx=cur;
		}
	}
	return mx;
}
int main(){
	ll n,k;
	scanf("%lld %lld",&n,&k);
	printf("%lld\n",get_ans(n,k));
	return 0;
}
