/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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