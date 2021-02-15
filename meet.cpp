#include<bits/stdc++.h>
using namespace std;


bool meet(int x1,int v1, int x2, int v2){

	if(x1>x2 and v1>=v2)return false;
	// if one is ahed with high velocity compare to another one than they will never meet
	if(x1<x2 and v1<=v2)return false;
	 we should calculate relative speed and relative distance
	 if relative distance has its factor as relative speed
	 than they will meet  
	return (abs(x1-x2)%abs(v1-v2)==0);

}
int main(){
int x1,v1,x2,v2;
cin>>x1>>v1>>x2>>v2;
if(meet(x1,v1,x2,v2))cout<<"yes";
else cout<<"No";
return 0;
}


























 


