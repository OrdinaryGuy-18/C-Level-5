#include <stdio.h>
#include <math.h>
void multiplyMatrices(int N,int mat1[][N],int mat2[][N],int result[][N]);
void print(int N,int result[][N]);

int main()
{
    int n;
    printf("Enter the dimensions for the two matrices:");
    scanf("%d",&n);
    
    //Matrix 1:
    int mat1[n][n];
    printf("Enter the elements for matrix 1:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    
    //Matrix 2:
    int mat2[n][n];
    printf("Enter the elements for matrix 2:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    
    int result[n][n];
    multiplyMatrices(n,mat1,mat2,result);
}

void multiplyMatrices(int N,int mat1[][N],int mat2[][N],int result[][N])
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            int sum=0;
            for(int k=0;k<N;k++)
            {
                int product=mat1[i][k]*mat2[k][j];
                sum+=product;
            }
            result[i][j]=sum;
        }
    }
    
    print(N,result);
}

void print(int N,int result[][N])
{
    printf("Result should be:\n");
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
}
