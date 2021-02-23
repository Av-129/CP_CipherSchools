int minimumJumps(int arr[], int value){
    
    int dp[value];
    for(int i=0;i<value;i++)
    dp[i]=INT_MAX;
    
    dp[0]=0;
    
    for(int i=1;i<value;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(dp[j]!=INT_MAX)
            {
                if(j+arr[j]>=i)
                dp[i]=min(dp[i],dp[j]+1);
            }
        }
    }
    
    if(dp[value-1]==INT_MAX)
    return -1;
    else
    return dp[value-1];    
}