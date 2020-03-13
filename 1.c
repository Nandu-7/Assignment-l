/* to calculate the Simple interest*/
#include<stdio.h>
void main()
{
    float principle, time, rate, SI;
    printf("/nEnter principle (amount): ");
    scanf("%f", &principle);
    printf("Enter time: ");
    scanf("%f", &time);
    printf("Enter the rate: ");
    scanf("%f", &rate);
    /*calculate simple interest*/
    SI=(principle*time*rate)/ 100;
    
    /*print the resultant value of SI*/
    printf("Simple interest=%f", SI);
}