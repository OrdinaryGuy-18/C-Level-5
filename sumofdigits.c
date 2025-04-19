//A Code for adding digits using functions in C
#include <stdio.h>
int digitsum(int a);

int main()
{
    int n;
    printf("Input:");
    scanf("%d",&n);
    
    int sum=digitsum(n);
    printf("Output:%d",sum);
    return 0;
}

int digitsum(int a)
{
    int sum=0;
    while(a>0)
    {
        int rem=a%10;
        sum+=rem;
        a/=10;
    }
    return sum;
}
