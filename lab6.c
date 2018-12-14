#include <stdio.h>
#include <string.h>
#include <cs50.h>
int main (void)
{
    char str[255];
    char str1[255];
    int count=0,m=0,n=0;
    fgets(str, sizeof(str) ,stdin);
    
    if(str!=NULL){
        for (int i = 0 ; i<255; i++)
        {
            if(str[i]!=' '|| str!='\0')
            {
                str1[m]=str[i];
                printf("%c",str1[m]);
                m++;
            }
            else
            {
                if(str1==NULL)
                {
                    
                }
                else{
                    n=m/2-1;
                    printf("\n%d\n%d\n",n,m);
                    for(int j=0; j<n; j++)
                    {
                        if(str1[j]==str1[m-j-2])
                        {
                            count++;
                        }
                    }
                    if(count == n)
                    {
                        for(int j=0;j<m; j++)
                        {
                            printf("%c",str1[j]);
                        }
                        printf("\n");
                    }
                
                //memset(str1, 0, sizeof str1);
                }  
                m=0;    
            }
        
        }
}   
}
