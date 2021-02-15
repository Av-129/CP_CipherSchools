#include<bits/stdc++.h>
using namespace std;
int missing(vector<int>& A){
	int m=0;
	for(int i=0;i<A.size();i++){
		m^=A[i]^(i+1);

	}
	m^=A.size()+1;
	return m;
}

int main(){
	vector<int>A;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		A.push_back(a);
	}
	cout<<missing(A);
	return 0;
}