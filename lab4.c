#include <stdlib.h>
#include <stdio.h>

int main(void)
{

    int array[10];
    int arrays[8];
    int i, j, x;
    
    for(i = 0, x=1; i<10;i++, x++)
    {
        array[i]=rand()%10;
        printf("%d = %d\n",x,array[i]);
    }
    
    printf("\n\n");
    
    for(i = 5,j=0; i<10;j++, i++)
    {
        arrays[j]=array[i];
    }
    
    
    
    for(; j<8; j++)
    {
        arrays[j]=rand()%10;
    }
    
    for(int i =0,x=1; i<8; i++,x++)
    {
            printf("%d = %d\n",x,arrays[i]);
    }       
}  
