#include <stdio.h>
#include <string.h>

char non_repeater(char str[])
{
    int n=strlen(str);
    for(int i=0;i<n;i++)
    {
        int flag=0;
        for(int j=0;j<n;j++)
        {
            if(i!=j && str[i]==str[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            return str[i];
        }
    }
        return '\0';
    
}
int main()
{
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    
    char ncr;
    ncr=non_repeater(str);
    if(ncr!='\0')
    {
    printf("First non-repeating character is %c",ncr);
    }
    else
    {
    printf("First non-repeating character is Null");
    }
}
