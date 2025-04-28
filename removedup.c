#include <stdio.h>
#include <limits.h>
int removeDuplicates(int arr[],int new[],int size)
{
    int index=0;
     for(int i=0;i<size;i++)
     {
         for(int j=i+1;j<size;j++)
         {
             if(arr[i]==arr[j])
             {
                 arr[j]=INT_MIN;
             }
         }
         if(arr[i]!=INT_MIN)
         {
             new[index++]=arr[i];
         }
     }
     return index;
}
int main()
{
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    
    int arr[n],new[n];
    printf("Enter the elements of the array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int nlen=removeDuplicates(arr,new,n);
    printf("Array after removing duplicates:");
    for(int i=0;i<nlen;i++)
    {
        printf("%d ",new[i]);
    }
}
