#include<bits/stdc++.h>
using namespace std;

int findCandidate(vector<int>& A)
{
    int candidateIndex = 0, c = 1;
    for (int i = 1; i < A.size(); i++) {
        if (A[candidateIndex] == A[i])
            c++;
        else
            c--;
        if (c == 0) {
            candidateIndex = i;
            c = 1;
        }
    }
    return A[candidateIndex];
}
 
void isMajority(vector<int>& A, int candidate)
{
    int c = 0;
    for (int i = 0; i < A.size(); i++)
 
        if (A[i] == candidate)
            c++;
 
    if (c > A.size() / 2)
     cout<<candidate<<" is the majority element ";
 
    else
        cout<<"No";
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
	int candidate=findCandidate(A);
	isMajority(A,candidate);
return 0;
}

