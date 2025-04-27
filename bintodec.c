#include <stdio.h>
#include <math.h>

int BinarytoDecimal(int n)
{
    int ans=0,digit=0,two=1;
    while(n>0)
    {
        int rem=n%10;
        ans+=rem*two;
        n/=10;
        two*=2;
    }
    return ans;
}

int main()
{
    int b,d;
    printf("Enter a binary number:");
    scanf("%d",&b);
    d=BinarytoDecimal(b);
    printf("The decimal equivalent of binary number is:%d",d);
}
