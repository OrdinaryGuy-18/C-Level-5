#include <stdio.h>
void transpose(int r,int c,int a[r][c],int b[c][r]);

int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int arr[m][n];
    int mat[n][m];
    //Enter the elements
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    transpose(m,n,arr,mat);
    //PRINT
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}

void transpose(int r,int c,int a[r][c],int b[c][r])
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            b[j][i]=a[i][j];
        }
    }
}
