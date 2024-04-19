
/*
    author : Neeraj Kumar Rawat
    platform : gfg
    problem link : https://www.geeksforgeeks.org/problems/two-repeated-elements-1587115621/
    problem : Two Repeated Elements
    difficulty: medium

*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    //Function to find two repeated elements.
    vector<int> twoRepeated (int arr[], int n) {
        // Your code here
        vector<int> ans;
        unordered_map<int ,int> mp;
        for(int i=0; i<n+2; i++){
            mp[arr[i]]+=1;
            if(mp[arr[i]] == 2){
                ans.push_back(arr[i]);
            }
        }
       
        return ans;
    }
};