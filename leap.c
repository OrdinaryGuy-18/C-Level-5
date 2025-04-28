#include <stdio.h>

int check_leap(int a)
{
    if(a%100==0)
    {
        if(a%400==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else if(a%4==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n,result;
    printf("Enter a year:");
    scanf("%d",&n);
    
    result=check_leap(n);
    if(result)
    {
        printf("%d is a leap year",n);
    }
    else
    {
        printf("%d is not a leap year",n);
    }
}
