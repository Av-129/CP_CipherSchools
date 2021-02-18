    #include<bits/stdc++.h>
using namespace std;

    long long int numberOfPaths(int p, int size){
        
      long long int dp[p][size];
      for(int i=0;i<size;i++)
       dp[0][i]=1;
       
       for(int i=0;i<p;i++)
       dp[i][0]=1;
       
       for(int i=1;i<p;i++)
       {
           for(int j=1;j<size;j++)
           {
               dp[i][j]=(dp[i-1][j]+dp[i][j-1])%(1000000007);
               
           }
       }
       
       return dp[p-1][size-1];
    }