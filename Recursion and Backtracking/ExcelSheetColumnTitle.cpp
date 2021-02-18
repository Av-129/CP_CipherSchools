  #include<bits/stdc++.h>
using namespace std;
 string convertToTitle(int n) {
      
        string s="";
        while(n--){
           s+='A'+n%26;
            n=n/26;
        }
        reverse(s.begin(), s.end());
        return s;
    }