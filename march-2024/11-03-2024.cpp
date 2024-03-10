

/*
    author : Neeraj Kumar Rawat
    platform : gfg
    problem link : https://www.geeksforgeeks.org/problems/count-pairs-sum-in-matrices4332
    problem : Count pairs Sum in matrices
    difficulty: easy
*/ 

/*
    approach: 
        : take all the elements of matrix2 into map with their frequency
        : then iterate on each element of matrix1 
            if the (x-mat1[i][j]) is present in the map then take sum of frequency of that element
*/ 

#include<bits/stdc++.h>
using namespace std;

class Solution{
public:	
	
	int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
	{
	    
	    unordered_map<int ,int> mp;
	    for(int i=0; i<n; i++){
	        for(int j=0; j<n; j++){
	            mp[mat2[i][j]]++;
	        }
	    }
	    int ans = 0;
	    for(int i=0; i<n; i++){
	        for(int j=0; j<n; j++){
	            int req = x-mat1[i][j];
	            if(mp.count(req)>0){
	                ans+= mp[req];
	            }
	        }
	    }
	    return ans;
	}
};