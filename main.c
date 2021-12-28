#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter your number:");
    int n = 0;
    scanf("%d",&n);

    if(n==1)
    printf("1 ");
    else {
        printf("The divisors of %d are:" ,n);

        for(int i = 1;i <= n/2; i++)
            if(n%i== 0)
            printf("%d ",i);
        printf("%d",n);
    }
    return 0;
}
