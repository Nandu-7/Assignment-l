#include<stdio.h>
int main()
{
    int i, t1=0, t2=1, n, nextterm;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for(i=1; i<=n; ++i)
    {
        printf("%d, ", t1);
        nextterm= t1+t2;
        t1=t2;
        t2=nextterm;
    }
    return 0;
}