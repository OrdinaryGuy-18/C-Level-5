#include <stdio.h>

int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
int divi(int a,int b)
{
    if(b==0)
    {
        printf("Error:Division by Zero");
        return -1;
    }
    return a/b;
}

int Calc(int a,int b,char o)
{
    int ans;
    switch(o)
    {
        case '+':
            ans=add(a,b);
            break;
        case '-':
            ans=sub(a,b);
            break;
        case '*':
            ans=mul(a,b);
            break;
        case '/':
            ans=divi(a,b);
            break;
        default:
            printf("Invalid operator.Error!");
            return -1;
    }
    return ans;
}

int main()
{
    int a,b;
    char c;
    printf("Enter operation(+,-,*,/):");
    scanf("%c",&c);
    printf("Enter two integers:");
    scanf("%d %d",&a,&b);
    int result=Calc(a,b,c);
    if(result!=-1)
    {
    printf("Result:%d",result);
    }
}
