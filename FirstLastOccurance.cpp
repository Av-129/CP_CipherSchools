#include<bits/stdc++.h>
using namespace std;
vector<int> FirstLastOccurance(vector<int>& nums, int target) {
        vector<int>v;
        int i=0;
        for(i=0;i<nums.size();i++){
            if(nums[i]==target){
                v.push_back(i);    
            }
            
        }
        if(v.size()==0){
           v={-1, -1};
            }
        else if(v.size()==1){
            v={v[0], v[0]};
        }
        else if(v.size()>2){
            v={v[0], v[v.size()-1]};
        }
           
        
        return v;
    }