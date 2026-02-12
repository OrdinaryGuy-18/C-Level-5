#include <stdio.h>

int min(int a,int b){
    if(a<b){
        return a;
    }
    return b;
}

int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int mat[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }

    int dp[m][n];
    dp[0][0]=mat[0][0];

    for(int i=1;i<m;i++){
        dp[0][i]=mat[0][i]+ dp[0][i-1];
    }

    for(int i=1;i<n;i++){
        dp[i][0]=mat[i][0]+ dp[i-1][0];
    }

    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            dp[i][j]=mat[i][j]+min(dp[i-1][j],dp[i][j-1]);
        }
    }

    printf("%d",dp[m-1][n-1]);

}
