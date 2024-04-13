
/*
    author : Neeraj Kumar Rawat
    platform : gfg
    problem link : https://www.geeksforgeeks.org/problems/sum-of-products5049/
    problem : Sum of Products
    difficulty: medium

*/ 

/*

    approach: 

       :) count the no of set bit at i(th) position and calculate the permution of these bits
        :) multiply with contribution of ith bit in the number 
        :) do the summation

       time complexity: O(30*n) ~= O(n)
       space complexity : O(1)



*/ 



#include <bits/stdc++.h>
using namespace std;



class Solution {
  public:
    long long pairAndSum(int n, long long arr[]) {
        // code here
        
        long long ans = 0;
        for(int i=0; i<30; i++){
            long long contribution = 1<<i;
            int cnt = 0;
            for(int j=0; j<n; j++){
                if((contribution&arr[j])>0 ){
                    cnt++;
                }
            }
            ans+= (contribution)*cnt*(cnt-1)/2;
        }
        return ans;
    }
};