#include <stdio.h>
#include <string.h>

void seperator(int size,char a[][25],char spec);

int main()
{
    int n;
    printf("Enter no of tweets:");
    scanf("%d",&n);
    
    char words[n][25];
    for(int i=0;i<n;i++)
    {
        scanf("%s",words[i]);
    }
    
    char sep;
    printf("Enter seperator:");
    scanf("\n%c",&sep);
    seperator(n,words,sep);
}

void seperator(int size,char a[][25],char spec)
{
    int n=0;
    int l=0;
    char b[25][25];
    for(int i=0;i<size;i++)
    {
        for(int j=0;a[i][j]!='\0';j++)
        {
           if(a[i][j]==spec && (j==0 || a[i][j+1]=='\0'))
           {
               continue;
           }
           else if(a[i][j]!=spec)
           {
               b[n][l++]=a[i][j];
           }
           else
           {
               b[n][l]='\0';
               l=0;
               n++;
           }
        }
         b[n][l]='\0';
         l=0;
         n++;
    }
    
    printf("Output:\n");
    for(int i=0;i<n;i++)
    {
        printf("%s",b[i]);
        printf("\n");
    }
}