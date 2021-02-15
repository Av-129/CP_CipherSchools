#include<bits/stdc++.h>
using namespace std;
vector<int>peak(vector<int>& A){
	vector<int>v;
if(A.size()==1)v.push_back(A[0]);
if(A.size()==2 and A[0]>A[1])v.push_back(A[0]);

for(int i=1;i<A.size()-1;i++){
	if(A[i]>A[i-1] and A[i]>A[i+1])v.push_back(i);
}
if(A[A.size()-1]>A[A.size()-2])v.push_back(A[A.size()-1]);
return v;
}

int main(){
	vector<int>A,B;
	int n;
 	cin>>n;
 	for(int i=0;i<n;i++){
 		int a;
 		cin>>a;
 		A.push_back(a);
 	}
 	B=peak(A);
 	if(B.size()==0)cout<<"There is no peak element";
 	else {
 		cout<<"Here is are peak elements"<<endl;
 		for(int i=0;i<B.size();i++){
 			cout<<A[B[i]]<<" ";
 		}

 	}
 	return 0;
}
