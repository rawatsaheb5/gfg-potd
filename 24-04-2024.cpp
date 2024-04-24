

/*
    author : Neeraj Kumar Rawat
    platform : gfg
    problem link : https://www.geeksforgeeks.org/problems/paths-to-reach-origin3850/
    problem : Paths to reach origin
    difficulty: medium

*/

#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    
    int mod = 1000000007;
    int dp[600][600];
    int helper(int i,int j){
        if(i==0&& j==0){
            return 1;
        }
        if(dp[i][j] != -1){
            return dp[i][j]%mod;
        }
        
        int one = 0, two = 0;
        if(i>0){
            one = helper(i-1, j)%mod;
        }
        if(j>0){
            two = helper(i,j-1)%mod;
        }
        return dp[i][j] = (one%mod+two%mod)%mod;
    }
    int ways(int x, int y)
    {
        //code here.
        memset(dp, -1, sizeof(dp));
        int ans = helper(x,y)%mod;
        return ans;
    }
};