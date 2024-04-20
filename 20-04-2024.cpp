

/*
    author : Neeraj Kumar Rawat
    platform : gfg
    problem link : https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/
    problem : Union of Two Sorted Arrays
    difficulty: medium

*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    //Function to find two repeated elements.
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        
        unordered_set<int> st;
        for(int i=0; i<n; i++){
            st.insert(arr1[i]);
        }
        for(int j=0; j<m; j++){
            st.insert(arr2[j]);
        }
        vector<int> ans;
        for(auto it: st){
            ans.push_back(it);
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};