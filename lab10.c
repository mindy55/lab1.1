#include<stdio.h>
#include <stdlib.h>

int main(void)
{
    int n,m,x,y;
    do{
    printf("Enter n: ");
    scanf("%d",&n);
    }while(n>100||n<1);
    do{
    printf("Enter m: ");
    scanf("%d",&m);
    }while(m>100||m<1);
   
    int ** array;
    array=(int**)malloc(n*sizeof(int*));
    for(int i =0;i<n;i++)
    {
        array[i]=(int*)malloc(m*sizeof(int*));
        for(int j =0; j<m; j++)
        {
            array[i][j]=rand()%10;
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }  
    printf("\n");
    printf("Delet string: ");
    scanf("%d",&x);
    printf("Delet stack: "); 
    scanf("%d",&y);
    int ** array1;
    int t =0;
    array1=(int**)malloc((n-1)*sizeof(int*));
    for(int i =0,k=0;k<n;i++,k++)
    {
        array1[i]=(int*)malloc((m-1)*sizeof(int*));
        for(int j =0,v=0; v<m; j++,v++)
        {
        t =0;
            if(k!=(x-1) && v!=(y-1))
            {
                array1[i][j]=array[k][v];
                printf("%d ",array1[i][j]);
                t=1;
            }
              
            else if(v==(y-1)){
            j--;
            }
        }
         if(k==(x-1)){
            i--;
            } 
        if(t==1)
        printf("\n");
    }
    for(int i =0; i<n;i++){
    free(array[i]);
    }
    for(int i =0; i<n-1; i++){
    free(array1[i]);  
    }   
    free(array);
    free(array1);
}
