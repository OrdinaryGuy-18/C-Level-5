#include <stdio.h>
#include <math.h>
int arms(int a);
int per(int b);
int checker(int c,int d);

int main()
{
	int n;
	scanf("%d",&n);

	int isarm=arms(n);
	int isper=per(n);

	if(isarm)
	{
		printf("%d is an Armstrong Number.",n);
	}
	else
	{
		printf("%d is not an Armstrong Number.",n);
	}
	printf("\n");

	if(isper)
	{
        printf("%d is a Perfect Number.",n);
	}
	else
	{
	    printf("%d is not a Perfect Number.",n);
	}
	return 0;

}

int arms(int a)
{
    int digits=0;
    int dup=a;
    int og=a;
    while(dup>0)
    {
        dup/=10;
        digits++;
    }
    
    int sum=0;
    while(a>0)
    {
        int digit=a%10;
        sum+=pow(digit,digits);
        a/=10;
    }
    
    return checker(sum,og);
}

int per(int b)
{
    int fac[b];
    int index=0;
    for(int i=1;i<b;i++)
    {
        if(b%i==0)
        {
            fac[index++]=i;
        }
    }
    
    int sum=0,j=0;
    while(j<index)
    {
        sum+=fac[j];
        j++;
    }
    
    return checker(sum,b);
}

int checker(int c,int d)
{
    if(c==d)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}