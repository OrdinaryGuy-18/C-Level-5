#include <stdio.h>
#include <string.h>

void large_and_small(char a[])
{
    int len=strlen(a);
    int max=0,min=len,count=0;
    int max_index=0,min_index=0;
    for(int i=0;i<=len;i++)
    {
        if(a[i]==' ' || a[i]=='\t' || a[i]=='\n' || a[i]=='\0')
        {
            if(count>max)
            {
                max=count;
                max_index=i-count;
            }
            
            if(count<min)
            {
                min=count;
                min_index=i-count;
            }
            
            count=0;
            continue;
        }
        count++;
    }
    //Printing
    printf("Largest word:");
    for(int i=max_index;i<max_index+max;i++)
    {
        printf("%c",a[i]);
    }
    printf("\nSmallest word:");
    for(int j=min_index;j<min_index+min;j++)
    {
        printf("%c",a[j]);
    }
    printf("\nTheir Lengths:%d and %d",max,min);
}

int main()
{
    char str[50];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    
    large_and_small(str);
}
