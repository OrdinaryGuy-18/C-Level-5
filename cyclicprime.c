#include <stdio.h>
#include <math.h>

int isPrime(int n)
{
    if(n==1 || n==0)
    {
        return 0;
    }
    
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int reverse(int a)
{
    int b=0;
    while(a>0)
    {
        int last=a%10;
        b=b*10+last;
        a/=10;
    }
    return b;
}

// Function to perform one rotation (last digit becomes first)
int rotateOnce(int n, int digits)
{
    // Extract the last digit
    int lastDigit = n % 10;
    
    // Remove the last digit
    n = n / 10;
    
    // Calculate position value (10^(digits-1))
    int posValue = 1;
    for(int i=1; i<digits; i++) {
        posValue *= 10;
    }
    
    // Put the last digit at the front
    return lastDigit * posValue + n;
}

int cyclic(int num, int times)
{
    // First check if the original number is prime
    if(isPrime(num) == 0)
    {
        return 0;
    }
    
    int currentNum = num;
    
    // Check each rotation
    for(int i=1; i<times; i++) // Start from 1 since we already checked the original number
    {
        // Perform one rotation
        currentNum = rotateOnce(currentNum, times);
        
        // Check if the rotated number is prime
        if(isPrime(currentNum) == 0)
        {
            return 0;
        }
    }
    
    return 1; // All rotations are prime
}

int main()
{
    int n;
    scanf("%d",&n);
    
    //Digits calculation
    int number=n,digits=0;
    while(number>0)
    {
        number/=10;
        digits++;
    }
    
    int result=cyclic(n,digits);
    if(result)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
    return 0;
}
