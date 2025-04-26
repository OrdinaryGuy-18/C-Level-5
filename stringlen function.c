#include <stdio.h>
#include <string.h>

int StringLength(char str[])
{
    int count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    
    int len;
    len=StringLength(str);
    printf("The Length of the Given String %s is %d",str,len);
    return 0;
}
