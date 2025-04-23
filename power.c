#include <stdio.h>
double power(double base, int exponent);

int main()
{
    double a;
    int b;
    scanf("%lf %d",&a,&b);
    
    double ans=power(a,b);
    
    printf("%lf",ans);
    
    return 0;
}

double power(double base, int exponent)
{
    double pro=1.0;
    for(int i=0;i<exponent;i++)
    {
        pro*=base;
    }
    return pro;
}
