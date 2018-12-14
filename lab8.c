#include<stdio.h>

typedef struct
{
    char carrier [255]; 
    double volume[255];
    char name [255];
    char author [255];
}Information;
int main ()
{
    int n=0,m=0,y;
    double vol;
    char* q="Carrier: ";
    char* w="Volume: ";
    char* e="Name: ";
    char* r="Author: ";
    printf("How much you wont enter Information: ");
    scanf("%d",&n);
    FILE *f;
    FILE *f1;
    Information inf[n+1];
    f=fopen("new_text.txt","w+b+");
    if(f!=NULL)
    {
        for(int i =0; i<n; i++)
        {
            printf("Enter carrier: ");
            scanf("%s",inf[i].carrier);
            fputs(q,f);
            fputs(inf[i].carrier,f);
            fputs(" ",f);
        
            printf("Enter volume: ");
            scanf("%lf",inf[i].volume);
            fputs(w,f);
            fprintf(f,"%lf",*inf[i].volume);
            fputs(" ",f);
            
            printf("Enter name: ");
            scanf("%s",inf[i].name);
            fputs(e,f);
            fputs(inf[i].name,f);
            fputs(" ",f);
            
            printf("Enter author: ");
            scanf("%s",inf[i].author);
            fputs(r,f);
            fputs(inf[i].author,f);
            fputs("\n",f);
            
        }
        fclose(f);
        f=fopen("new_text.txt","r");
        f1=fopen("f1.txt","w");
        printf("If you wont delet one information , pleas enter volume: ");
        scanf("%lf",&vol);

        printf("Enter where you want add: ");
        scanf("%d",&y);
        for(;m<n;m++)
        {
        
                   int x=(int)*inf[m].volume;
              
                 if((y-1)==m)
        {
            printf("Enter carrier: ");
            scanf("%s",inf[n].carrier);
            fputs(q,f1);
            fputs(inf[n].carrier,f1);
            fputs(" ",f1);
            
            printf("Enter volume: ");
            scanf("%lf",inf[n].volume);
            fputs(w,f1);
            fprintf(f1,"%lf",*inf[n].volume);
            fputs(" ",f1);
            
            printf("Enter name:\n ");
            scanf("%s",inf[n].name);
            fputs(e,f1);
            fputs(inf[n].name,f1);
            fputs(" ",f1);
            
            printf("Enter author: ");
            scanf("%s",inf[n].author);
            fputs(r,f1);
            fputs(inf[n].author,f1);
            fputs("\n",f1);
         }
          if((int)vol!=x)
            {
                fputs(q,f1);
                fprintf(f1,"%s",inf[m].carrier);
                fputs(" ",f1);
                fputs(w,f1);
                fprintf(f1,"%lf",*inf[m].volume);
                fputs(" ",f1);
                fputs(e,f1);
                fprintf(f1,"%s",inf[m].name);
                fputs(" ",f1);
                fputs(r,f1);                
                fprintf(f1,"%s",inf[m].author);
                fputs("\n",f1);
            }
            else {
                vol=0;
            }         
        }
      fclose(f);
      fclose(f1);
    }    
                                                            
}
