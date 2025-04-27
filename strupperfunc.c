#include <stdio.h>
#include <string.h>

void UpperCase(char a[])
{
    int len=strlen(a);
    for(int i=0;i<len;i++)
    {
        if(a[i]>='a' && a[i]<='z')
        {
            a[i]-=32;
        }
    }
}

int main()
{
    char str[100];
    printf("Enter a string:");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    UpperCase(str);
    printf("The uppercase string is:%s",str);
}
