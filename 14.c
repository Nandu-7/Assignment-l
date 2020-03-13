/*factorial*/
#include <stdio.h>
void main()
{
    int fact = 1, n;
 
    printf("Enter the number \n");
    scanf("%d", &n);
    if (n <= 0)
        fact = 1;
    else
    {
        for (int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
    }
    printf("Factorial of %d = %d\n", n, fact);
}