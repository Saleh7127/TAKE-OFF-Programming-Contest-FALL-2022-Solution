#include<stdio.h>
#define ll long long
int main()
{
    int year;
    scanf("%d", &year);
    if(year<1582)
    {
        if(year%4==0){
            printf("I can participate in LCPC\n");
        }
        
    }
    else
    {
        if((year % 4 ==0 && year % 100 != 0) || (year % 400 == 0)){
            printf("I can participate in LCPC\n");
        }
        else{
            printf("I have to travel back to the past\n");
        }
    }
    return 0;
}
