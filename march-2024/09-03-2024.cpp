

/*
    author : Neeraj Kumar Rawat
    platform : gfg
    problem link : https://www.geeksforgeeks.org/problems/find-the-n-th-character5925
    problem : Find the N-th character
    difficulty: medium

*/ 

/*

    approach: 

        since n is up to 1e3 so will be try to make the string 1e3 if it is getting longer because string greater than 1e3 will be of no use 
            : for the (r) iteration 
                if (i)th character is '1' then add "10"
                else add "01"

            : then return the character at (n)th index



*/ 



#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    char nthCharacter(string s, int r, int n) {
    
        
        while(r--){
            string temp = "";
            for(auto ch: s){
                if(ch == '1'){
                    temp+="10";
                }
                else{
                    temp+= "01";
                }
                if(temp.length()> 1e3){
                    break;
                }
            }
            s = temp;
        }
        return s[n];
    }
};