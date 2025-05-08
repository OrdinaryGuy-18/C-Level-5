#include <stdio.h>

int Non_Zero(int rows,int col,int mat[rows][col])
{
    int nzcount=0;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(mat[i][j]!=0)
            {
                nzcount++;
            }
        }
    }
    return nzcount;
}

int Row_max(int rows,int cols,int mat[rows][cols])
{
    int sum=0;
    for(int i=0;i<rows;i++)
    {
        int max=0;
        for(int j=0;j<cols;j++)
        {
            if(mat[i][j]>max)
            {
            max=mat[i][j];
            }
        }
        sum+=max;
        
    }
    return sum;
}

int Col_max(int rows,int cols,int mat[rows][cols])
{
    int sum=0;
    for(int i=0;i<cols;i++)
    {
        int max=0;
        for(int j=0;j<rows;j++)
        {
            if(mat[j][i]>max)
            {
            max=mat[j][i];
            }
        }
        sum+=max;
    }
    return sum;
}

int main()
{
    int r,c;
    printf("Enter no.of rows:");
    scanf("%d",&r);
    printf("Enter no.of columns:");
    scanf("%d",&c);
    
    int mat[r][c];
    printf("Enter the matrix elements:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    
    int nz_count=Non_Zero(r,c,mat);
    int row_max=Row_max(r,c,mat);
    int col_max=Col_max(r,c,mat);
    printf("Nonzero Count:%d",nz_count);
    printf("\nRow Max Sum:%d",row_max);
    printf("\nColumn Max Sum:%d",col_max);
    printf("\nFinal Result:%d",nz_count+row_max+col_max);
    return 0;
}
