
#include<bits/stdc++.h>
using namespace std;
int sumC(vector<int>& A){
	int maxtillhere=A[0];
	int maxendinghere=A[0];
	for(int i=1;i<A.size();i++){
		maxtillhere=max(maxtillhere+A[i],A[i]);
		maxendinghere=max(maxendinghere,maxtillhere);
	}
	return maxendinghere;

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
	cout<<sumC(A);
	
}