void print(vector<int>& A){
	stack<int>s1,s2;
	s1.push(A[A.size()-1]);
	s2.push(-1);
	for(int i=A.size()-2;i>=0;i--){
	while(s1.empty()==false and s1.top()<=A[i])s1.pop();
	int ng=(s1.empty())?(-1):(s1.top());
	s2.push(ng);
	s1.push(A[i]);
	}
	while(s2.empty()==false){

int x=s2.top();
cout<<x<<" ";
s2.pop();
	}
}