#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    if(n>m){
        printf("Champion\nRunner up\n");
    }
    else {
        printf("Runner up\nChampion\n");
    }
    return 0;
}

