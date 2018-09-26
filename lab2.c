#include <stdio.h>

int main(void)
{
    float y=1,y2=1,a,sum=0,x=1,x2=2*x;
    do{
        for(int i =0; x>i; x--){
            y = y * x;
        }
        for(int i=0; x2>i; x2--){
        y2 = y2 * x2;
        }
        
        a = y / y2; 
    
        sum = sum + a;
    
        if(a <= 0.0001){
            printf("%f\n",sum);
        }
        else{
            x++;
            x2=x * 2;
        }        
        
    }while(a>=0.0001);
}
