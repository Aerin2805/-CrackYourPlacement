// Leetcode Problem Number 54

#include<bits/stdc++.h>
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        
        
        int lft = 0;
        int rt = mat[0].size() - 1;
        int tp = 0;
        int bot = mat.size() - 1;
        vector<int> v;
        while(rt>=lft && bot>=tp){
            for(int i = lft ; i<=rt ; i++){
                v.push_back(mat[tp][i]);
            }
            tp++;
            for(int i = tp ; i<=bot ; i++){
                v.push_back(mat[i][rt]);
            }
            rt--;
if(tp<=bot){
            for(int i = rt ; i>=lft ; i--){
                v.push_back(mat[bot][i]);
            }
        }
              bot--;
if(rt>=lft){
           for(int i = bot ; i>=tp ; i--){
                v.push_back(mat[i][lft]);
            }
        }
            lft++;
        }
return v;
    }
};