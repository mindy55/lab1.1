#include <stdio.h>
#include <math.h>


float factorial(float n);
int main(void)
{
double y=0,s=0,n=0,s1=0,sum=0;
    for(double x= 0.1; x<=1; x+=0.1)
    {
        y = exp(cos(x))*cos(sin(x));
        for(; n<=20; n++)
      {
            s +=cos(n*x)/factorial(n);
      }
      n=0;
        do{
            s1=cos(n*x)/factorial(n);
            sum += s1;
            n++;
        }while(fabs(s1)>0.0001);
        
     
        printf("X= %.5lf  ",x);
        printf("SN= %.5lf  ",s);
        printf("SE= %.5lf  ",sum);
        printf("Y= %.5lf\n",y);
         n=1;
         s=0;
         s1=0;
         sum=0;
    }
        
}
float factorial(float n)
{
    float f=1;
    for(;n>0;n--){
        f = f*n;
    }       
    return f;
}                             
            
