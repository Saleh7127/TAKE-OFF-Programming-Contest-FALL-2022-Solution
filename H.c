#include <stdio.h>
typedef long long int lld;
int main()
{
    int tst = 1;
    int t;
    scanf("%d", &t);
    while(t--)
    {
        lld n, k;
        scanf("%lld %lld", &n, &k);
        lld a[k+4], len = 0;
        printf("Case %d:\n", tst++);
        lld jodu_score = 0, modu_score = 0;
        while(n--)
        {
            lld j, m;
            scanf("%lld %lld", &j, &m);
            if(m<j){
                modu_score+=m;
                while(len>=1 && a[len-1]<j)
                {
                    jodu_score+=a[len-1];
                    len--;
                }
                if(len<k)a[len++]=j;
            }
            else
            {
                jodu_score+=j;
                while(len>=1 && a[len-1]<m)
                {
                    modu_score+=a[len-1];
                    len--;
                }
                if(len<k)a[len++]=m;
            }
            if(modu_score==jodu_score){
                printf("Draw\n");
            }
            else if(modu_score<jodu_score){
                printf("Jodu\n");
            }
            else
            {
                printf("Modu\n");
            }
        }
    }
    return 0;
}

