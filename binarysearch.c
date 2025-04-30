#include <stdio.h>
void bubblesort(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

int binarysearch(int arr[],int left,int right,int target)
{
    if(left<=right)
    {
    int mid=left+(right-left)/2;
    if(arr[mid]==target)
    {
        return mid;
    }
    else if(arr[mid]>target)
    {
        return binarysearch(arr,left,mid-1,target);
    }
    else 
    {
        return binarysearch(arr,mid+1,right,target);
    }
    }
        return -1;
}

int main()
{
    int n;
    printf("Enter the array size:");
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter the array elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    bubblesort(arr,n);
    printf("The sorted array:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    
    int m;
    printf("\nEnter the target to be searched:");
    scanf("%d",&m);
    
    int index;
    index=binarysearch(arr,0,n-1,m);
    if(index==-1)
    {
        printf("\nElement %d is not found",m);
    }
    else 
    {
        printf("\nElement %d is found at index:%d",m,index);
    }
}
