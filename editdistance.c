#include <stdio.h>
#include <string.h>

int min(int a,int b,int c){
    if(a<b && a<c){
        return a;
    }
    else if(b<a && b<c){
        return b;
    }
    else{
        return c;
    }
}

int main(){
    char s1[1000],s2[1000];
    scanf("%s",&s1);
    scanf("%s",&s2);
    int n1=strlen(s1);
    int n2=strlen(s2);
    
    int dp[n1+1][n2+1];
    
    for(int i=0;i<=n1;i++){
        dp[i][0]=i;
    }
    
    for(int j=0;j<=n2;j++){
        dp[0][j]=j;
    }
    
    for(int i=1;i<=n1;i++){
        for(int j=1;j<=n2;j++){
            if(s1[i-1]==s2[j-1]){
                dp[i][j]=dp[i-1][j-1];
            }
            else{
                dp[i][j]=1+min(dp[i-1][j],dp[i-1][j-1],dp[i][j-1]);
            }
        }
    }
    
    printf("Edit Distance:%d",dp[n1][n2]);
}
