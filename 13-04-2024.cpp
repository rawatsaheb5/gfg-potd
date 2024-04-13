
/*
    author : Neeraj Kumar Rawat
    platform : gfg
    problem link : https://www.geeksforgeeks.org/problems/reverse-bits3556/
    problem : Reverse Bits
    difficulty: easy

*/ 

/*

    approach: 

       :) if the (i)th bit is set in binary representation of a number then set (31-i)th bit in reversed number 
        

       time complexity: O(32) 
       space complexity : O(1)



*/ 



#include <bits/stdc++.h>
using namespace std;



class Solution {
  public:
    long long reversedBits(long long x) {
        
        long long num = 0;
        
        for(long long i =0; i<32; i++){
            
            long long mask =(1LL*1<<i);
            
            if((mask&x)){
                
                num|= 1LL*1<<(31-i);
            }
        }
        return num;
    }
};
