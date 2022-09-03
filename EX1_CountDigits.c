#include <stdio.h>

int main() {

    while (1) {

        long long x, count = 1;
        printf("Enter a number: ");
        scanf("%lld", &x);
        while(x%10 != 0){
            count++;
            x/=10;
        }
        printf("\n%d digits\n\n",count);
    }
    return 0;
}
