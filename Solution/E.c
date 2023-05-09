#include<stdio.h>
int main(){
   int n,m;
   scanf("%d %d",&n,&m);
   int ans = 0;
   for(int i=0; i<n;i++){
       for(int j=0;j<m;j++){
           int c;
           scanf("%d", &c);
           if(c==0){
               ans++;
           }
       }
   }
   printf("%d\n",ans);
}

