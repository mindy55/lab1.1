#include <stdio.h>
#include <math.h>

int main(void)
{
    float a,b,c ;
    
    printf("number a: "); 
    scanf("%f",&a);
    printf("number b: ");
    scanf("%f",&b);

    c = (pow((a-b),4)-(pow(a,4)-4*pow(a, 3)*b+6*a*a*b*b))/(pow(b, 4)-4*a*pow(b, 3));

    printf("%f\n",c);
    
    return 0 ;
}
