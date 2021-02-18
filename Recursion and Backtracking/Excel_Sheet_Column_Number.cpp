 #include<bits/stdc++.h>
using namespace std;
int solve(string A){
	int answer=0;
	for(auto s:A){
		answer=answer*26;
		answer+=s-'A'+1
	}
	return answer;
}