#include <stdio.h>
#include <string.h>
int pal(char str[100]);
int main()
{
    char str[100];
    scanf("%s",str);
    
    char ispalindrome=pal(str);
    
    if(ispalindrome)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}

int pal(char str[100])
{
    int flag=1;
    int len=strlen(str);
    for(int i=0;i<len/2;i++)
    {
        if(str[i]!=str[len-i-1])
        {
            flag=0;
            break;
        }
    }
    
    if(flag)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}