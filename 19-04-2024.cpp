

/*
    author : Neeraj Kumar Rawat
    platform : gfg
    problem link : https://www.geeksforgeeks.org/problems/in-first-but-second5423/
    problem : Find missing in second array
    difficulty: medium

*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    //Function to find two repeated elements.
    vector<int> findMissing(int a[], int b[], int n, int m) 
	{ 
	    // Your code goes here
	    vector<int> ans;
	    unordered_map<int ,int> mp;
	    for(int i=0; i<m; i++){
	        mp[b[i]]++;
	    }
	    for(int i=0; i<n; i++){
	        if(mp.count(a[i])>0){
	            continue;
	        }
	        else{
	            ans.push_back(a[i]);
	        }
	    }
	    return ans;
	} 
};