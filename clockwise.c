#include <stdio.h>

int rotation(int a[],int size);
int function(int b[],int limit);
int maximum(int c[],int n);

int main()
{
    int i;
    printf("Enter number of snacks:");
    scanf("%d",&i);
    
    int nums[i];
    printf("Enter the snacks:\n");
    for(int a=0;a<i;a++)
    {
        scanf("%d",&nums[a]);
    }
    
    int score;
    score=rotation(nums,i);
    
    printf("Maximum score:%d",score);
}

int rotation(int a[],int size)
{
    int f[size],index=0;
    for(int i=0;i<size;i++)
    {
        f[index++]=function(a,size);
        int temp=a[size-1];
        for(int j=size-1;j>=0;j--)
        {
            if(j==0)
            {
                a[j]=temp;
                break;
            }
            a[j]=a[j-1];
        }
        
    }
    
    //Finding the maximum score
    int max=maximum(f,index);
    return max;
}

int function(int b[],int limit)
{
    int value=0;
    for(int i=0;i<limit;i++)
    {
        value+=i*b[i];
    }
    return value;
}

int maximum(int c[],int n)
{
    int greatest=c[0];
    for(int i=1;i<n;i++)
    {
        if(c[i]>greatest)
        {
            greatest=c[i];
        }
    }
    return greatest;
}
