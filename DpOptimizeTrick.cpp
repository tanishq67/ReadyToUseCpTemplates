 Dp (i,j)          { where j is a string of max size m and i can be till size n}

 now you will try to store it with a map< pair<int,string>, int> 
 But the complexity goes to O(log (n * m)) which is not the best
 Rather if we will make vector<map<string,int>> dp[n] 
 then we can always excess dp like dp[i][j] and our time complexity is O(logm)

 This can be generalized as -  
dp(i,j,k ) -> { i, j, k }

vector(n) -> map {j,k}
should be the method
