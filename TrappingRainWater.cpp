#include<bits/stdc++.h>
using namespace std;
int trappingWater(int arr[], int n){

    // Your code here
  int lmax[n], rmax[n];
    
    lmax[0]=arr[0];
    rmax[n-1]=arr[n-1];
    
    for (int i=1;i<n;i++) {
        
        lmax[i]=max(arr[i],lmax[i-1]);
        rmax[n-1-i]=max(arr[n-1-i],rmax[n-i]);
    }

    int res = 0;
    for (int i=0;i<n;i++) {
        res=res+min(lmax[i],rmax[i])-arr[i];
    }
    return res;

    
}