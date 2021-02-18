  #include<bits/stdc++.h>
using namespace std;
	int countwayshelper(string answer, int size)
	{
	    if(size==1 || size==0)
	    return 1;
	    
	    if(answer[0]=='0')
	    return 0;
	    
	    int count=0;
	    if(answer[size-1]>'0')
	    count=countwayshelper(answer,size-1);
	    
	    if(answer[size-2]=='1' || ( answer[size-2]=='2' && answer[size-1]<'7'))
	    count+=countwayshelper(answer,size-2);
	    
	    return count;
	}
		int CountWays(string answer){
		    int size=answer.length();
		    if(size==0 || (size==1 && answer[0]=='0'))
		    return 0;
		    
		    return (countwayshelper(answer,size));
		}