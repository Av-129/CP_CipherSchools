#include <bits/stdc++.h>
using namespace std;
 void solve(stack<int>& v){
 	stack<int>s;
 	while(v.empty()==false){
 		int x=v.top();
 		s.push(x);
 		v.pop();
 	}
 while(s.empty()==false){
 	int x=s.top();
 	cout<<x<<" ";
 	s.pop();
 }
 }

// to reverse the queue
void resolve(stack<int>& v){
	queue<int>q;
		while(v.empty()==false){
		int x=v.top();
		q.push(x);
		v.pop();
	}
	stack<int>st;
while(q.empty()==false){
	st.push(q.front());
	
	q.pop();
}
while(st.empty()==false){
	q.push(st.top());
	st.pop();
}
while(q.empty()==false){
	int x=q.front();
	cout<<x<<" ";
	q.pop();
}
cout<<endl;
}
int main(){
	stack<int>v;
int n;

cin>>n;

for(int i=0;i<n;i++){
int a;
cin>>a;
v.push(a);

}
resolve(v);
solve(v);
return 0;
}
