#include <stdio.h>
int main(){
    int test_case;
    scanf("%d", &test_case);
    while(test_case--){
        int m, x;
        scanf("%d %d", &m, &x);
        int pizza_count = (m / x) + (m / (2 * x));
        printf("%d\n", pizza_count);
    }
    return 0;
}

