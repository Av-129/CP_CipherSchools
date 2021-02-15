#include<bits/stdc++.h>
using namespace std;
bool search(vector<vector<int> >& A, int x){
	int r=A.size();
	if(r==0)return false;
	int c=A[0].size()-1;
	int i=0;
	while(i<r and c>=0){
		if(A[i][c]==x)return true;
		else if(A[i][c]<x)i++;
		else if(A[i][c]>x)c--;
		
	}
	return false;
}


int main(){
vector<vector<int> >A;
int n;
cin>>n;
int a;
cin>>a;
for(int i=0;i<n;i++){
	
	vector<int>b;
	for(int j=0;j<a;j++){
		int f;
		cin>>f;
		b.push_back(f);
	}
	A.push_back(b);
	b.clear();
	
}

int x;
cin>>x;
    if(search(A,x))cout<<"yes";
    else cout<<"No";	
}
