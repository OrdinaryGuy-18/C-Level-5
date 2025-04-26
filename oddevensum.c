#include <stdio.h>
int sumOdd(int arr[],int size)
{
    int o_count=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==1)
        {
            o_count+=arr[i];
        }
    }
    return o_count;
}

int sumEven(int arr[],int size)
{
    int e_count=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            e_count+=arr[i];
        }
    }
    return e_count;
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int odd,even;
    odd=sumOdd(arr,n);
    even=sumEven(arr,n);
    printf("Sum of Even Numbers:%d\n",even);
    printf("Sum of Odd Numbers:%d",odd);
    return 0;
}
