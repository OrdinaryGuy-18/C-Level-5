#include <stdio.h>
#include <math.h>

int rev(int num)
{
    int reverse=0;
    while(num>0)
    {
    reverse=reverse*10+(num%10);
    num/=10;
    }
    return reverse;
}

int isPrime(int n)
{
    if(n<=1)
    {
        return 0;
    }
    
    if(n==2)
    {
        return 1;
    }
    
    if(n%2==0)
    {
        return 0;
    }
    for(int i=3;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

void PrimeAnagram(int a,int b,int pairs[100])
{
    int index=0;
    for(int i=a;i<=b;i++)
    {
        int reversed=rev(i);
        if(isPrime(i) && isPrime(reversed) && reversed>i)
        {
            pairs[index++]=i;
        }
    }
    pairs[index]=-1;
}

int main()
{
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    
    int pairs[100];
    PrimeAnagram(n1,n2,pairs);
    
    for(int i=0;pairs[i]!=-1;i++)
    {
        printf("%d - %d\n",pairs[i],rev(pairs[i]));
    }
    
    return 0;
}
