#include <stdio.h>
#include <string.h>
void wordcounter(int len,char str[len][25]);
int isEqual(char str1[], char str2[]);

int main()
{
    int words;
    printf("Enter the number of words:");
    scanf("%d",&words);
    char str[words][25];
    for(int i=0;i<words;i++)
    {
        scanf("%s",str[i]);
    }
    wordcounter(words,str);
}

void wordcounter(int len,char str[len][25])
{
    int flag[len];
    for(int i=0;i<len;i++)
    {
    flag[i]=0;
    }

    int count=0;
    for(int i=0;i<len;i++)
    {
        if(flag[i]==0)
        {
        for(int j=0;j<len;j++)
        {
            if(isEqual(str[i],str[j]))
            {
                flag[j]=1;
                count++;
            }
        }
        printf("%s:%d",str[i],count);
        count=0;
        }
    }
}

int isEqual(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return 0;  // Strings are not equal
        }
        i++;
    }
    // If both strings end at the same length, they are equal
    return (str1[i] == '\0' && str2[i] == '\0') ? 1 : 0;
}
