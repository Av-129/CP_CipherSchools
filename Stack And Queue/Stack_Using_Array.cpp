#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>& v){
	stack<int>s;
	for(int i=0;i<v.size();i++){
		s.push(v[i]);
	}
while(s.empty()==false){
	int x=s.top();
	cout<<x<<" ";
	s.pop();
}
}
void resolve(vector<int>& v){
	queue<int>q;
	for(int i=0;i<v.size();i++){
		q.push(v[i]);
	}
while(q.empty()==false){
	int x=q.front();
	cout<<x<<" ";
	q.pop();
}
cout<<endl;
}
int main(){
vector<int>v;
int n;

cin>>n;

for(int i=0;i<n;i++){
int a;
cin>>a;
v.push_back(a);

}
resolve(v);
reverse(v.begin(), v.end());
solve(v);

return 0;
}
