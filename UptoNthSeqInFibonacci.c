#include <stdio.h>

long fibonacci(long k);

int main()
{
    long y;
    printf("Get upto the nth sequence in the fibonacci series: ");
    scanf("%ld",&y);
    for(long i=0;i<=y;i++)
    {
        printf("%ld ",fibonacci(i));
    }
    printf("\n");
}

long fibonacci(long n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
