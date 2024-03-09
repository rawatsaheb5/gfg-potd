

/*
    author : Neeraj Kumar Rawat
    platform : gfg
    problem link : https://www.geeksforgeeks.org/problems/remove-all-duplicates-from-a-given-string4321
    problem : Remove all duplicates from a given string
    difficulty: easy
*/ 

/*
    approach:

        Requirement: take a map     
         : iterate on each character of the string and if the current char is present in the map then skip the current char 
         :else insert in map and also store in the ans variable



*/ 

#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
	string removeDuplicates(string str) {
	    
	    unordered_map<char, bool> mp;
	    string ans = "";
	    
	    for(auto ch: str){
	        if(mp.count(ch)>0){
	            continue;
	        }
	        else{
	            ans+=ch;
	            mp[ch] = true;
	        }
	    }
	    return ans;
	}
};