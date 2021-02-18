 #include<bits/stdc++.h>
using namespace std;

int solve(int A){
	int answer=0;
	for(int i=5;A/i>=1;i*=5){
		answer+=A/i;
	}
	return answer;
}
