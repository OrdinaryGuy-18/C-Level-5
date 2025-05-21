#include <stdio.h>

int Shortest(int r,int c,int mat[r][c],int rows,int cols)
{
    if(rows==r-1 && cols==c-1)
    {
        return mat[rows][cols];
    }

    if(rows == r-1)
    {
        return mat[rows][cols] + Shortest(r, c, mat, rows, cols+1);
    }
    
    if(cols == c-1)
    {
        return mat[rows][cols] + Shortest(r, c, mat, rows+1, cols);
    }
    
    int path_right=Shortest(r,c,mat,rows+1,cols);
    int path_down=Shortest(r,c,mat,rows,cols+1);
    if(path_right<path_down)
    {
        return mat[rows][cols]+path_right;
    }
    else
    {
        return mat[rows][cols]+path_down;
    }
}

int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    
    int mat[m][n];
    if((m>=2 && m<=7) && (n>=2 && n<=7))
    {
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                scanf("%d",&mat[i][j]);
            }
        }
        
        int s_path=Shortest(m,n,mat,0,0);
        printf("%d",s_path);
    }
    return 0;
}


