#include<bits/stdc++.h>
using namespace std;
void sortZeroOneTwo(vector<int>& nums) {
        int n=nums.size();
    int s=0;
    int i=0;
    int e=n-1;
    while(i<=e){
        if(nums[i]==0){
            swap(nums[i],nums[s]);
            s++;
        }
        else if(nums[i]==2){
            swap(nums[i], nums[e]);
            e--;
            continue;
        }
        i++;
    }
    
    
    return;
    }