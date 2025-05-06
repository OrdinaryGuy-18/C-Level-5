#include <stdio.h>
#include <string.h>

int anagram_checker(char str1[],char str2[])
{
    int len1=strlen(str1);
    int len2=strlen(str2);
    char freq[256]={0};
    if(len1!=len2)
    {
        return 0;
    }
    for(int i=0;i<len1;i++)
    {
        freq[str1[i]]++;
        freq[str2[i]]--;
    }
    
    for(int i=0;i<256;i++)
    {
        if(freq[i]!=0)
        {
            return 0;
        }
    }
    return 1;
}

void anagram_detector(int n,char a[n][100])
{
    int processed[100]={0};
    int words=0;
    for(int i=0;i<n;i++)
    {
        if(processed[i]==1)
        {
            continue;
        }
        processed[i]=1;
        for(int j=0;j<n;j++)
        {
            if(i==j || processed[j]==1)
            {
                continue;
            }
            
            if(anagram_checker(a[i],a[j]))
            {
                a[j][0]='\0';
            }
        }  
        
    }
    
    for(int i=0;i<n;i++)
    {
        if(a[i][0]!='\0')
        {
            printf("%s\n",a[i]);
        }
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    
    char str[n][100];
    for(int i=0;i<n;i++)
    {
        scanf("%s",str[i]);
    }
    anagram_detector(n,str);
    return 0;
}
