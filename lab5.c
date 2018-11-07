#include<stdio.h>
#include<string.h>

int posutiv_array (int n,int a[]);

int main(void){
    int c,s,count=0,j=0;
    printf("Columns: ");
    scanf("%d",&s);
        
    printf("Strings: ");
    scanf("%d",&c);
    int array[c][s];
    int array1[c][s];
    for(int i=0;i<c;i++)
    {
        for(int j =0; j<s;j++)
        {
            printf("Enter number: ");
            scanf("%d",&array[i][j]);
        }
    }
    
    for(int i=0;i<c;i++)
    {
        posutiv_array(s,array[i]);
    }
        
    for(int i=0;i<c;i++)
    {
        for(int j =0; j<s;j++)
        {
            printf("%d",array[i][j]);
            
        }
        printf("\n");
    } 
    
    for(int i=0;i<c;i++,j++)
    {
        for(int k=0;k<s;k++)
        {
        if(array[i][0]==0)
        {
            count++;
            j--;
            break;
        }
        else
        {
        array1[j][k]=array[i][k];
        }
        }
    }
    printf("%d\n",count);         
 
    for(int i =0;i<count;i++)
    {
        for(int h=0;h<s;h++)
        {
            array1[j+i][h]=0;
        }
    }
           
    for(int i=0;i<c;i++)
    {
        for(int j =0; j<s;j++)
        {
            printf("%d",array1[i][j]);
            
        }
        printf("\n");
    }

}
int posutiv_array (int n, int a[])
{
    for(int i = 0; i<n;i++)
    {
        if(a[i]<0)
        {
            for(int i =0;i<n;i++)
            {
                a[i]*=0;
            }
        }
    } 
      return a[n]; 
            
}    
