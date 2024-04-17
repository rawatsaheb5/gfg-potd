

/*
    author : Neeraj Kumar Rawat
    platform : gfg
    problem link : https://www.geeksforgeeks.org/problems/count-pairs-in-an-array4145/
    problem : Count Pairs in an Array
    difficulty: Hard

*/

/*
    approach:
        we can use policy based data structure (pbds) because it provides two methods [find_by_order() ] and [order_of_key] that works in log(n) time complexity

        here we are required to order_of_key() => that find the number of element strictly greater than or less than it in log(n) time;

        for each element we insert product of (element and index) in pbds than find the number of element greater than the cur product ;

*/
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef tree<pair<int,int>, null_type, greater<pair<int,int>>, rb_tree_tag,tree_order_statistics_node_update>pbds;
class Solution{
    public:
    int countPairs(int arr[] , int n ) 
    {
        // Your code goes here   
        pbds s;
        
        int ans = 0;
        for(int i=0; i<n; i++){
            int x = arr[i]*i;
            s.insert({x, i});
            
            int cnt = s.order_of_key({x,i});
            //cout<<cnt<<endl;
            
            ans+=cnt;
        }
        return ans;
    }
};