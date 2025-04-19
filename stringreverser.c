#include <stdio.h>
#include <string.h>
void rev(char str[]);

int main()
{
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    
    rev(str);

    return 0;
}

void rev(char str[])
{
    int l=strlen(str);
    for(int i=l-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
}