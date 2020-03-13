#include<stdio.h>
#include<math.h>
/*Used for sqrt()*/
void main()
{
    float a, b, c;
    float root1, root2, imaginary;
    float discriminent;

    printf("Enter values of a, b, c of quadratic equation (aX^2 + bX + c): ");
    scanf("%f%f%f", &a, &b, &c);
    /* Find the discriminent of the equation*/
    discriminent = (b*b)-(4*a*c);
    /*find the nature of the discriminant*/
    if (discriminent > 0)
    {
        root1= (-b+ sqrt(discriminent)) / (2*a);
        root2= (-b- sqrt(discriminent)) / (2*a);

        printf("Two equal and real roots exists: %.2f and %.2f", root1, root2);
    }
    else if(discriminent==0)
    {
        root1 = root2 = -b / (2*a);
        printf("Two equal and real roots exists: %.2f and %.2f", root1, root2);
    }
    else if(discriminent < 0)
    {
        root1 = root2 = -b / (2*a);
        imaginary = sqrt(-discriminent) / (2*a);

        printf("Two distinct complex roots exosts: %.2f + i%.2f and %.2f - i%.2f", root1, imaginary, root2, imaginary);
    }
}