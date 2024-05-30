#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    string s;
	    cin>>s;
	    int cr=1;
	    int cc=1;
	    
	        if(s[0]=='1')
	        {
	            cr+=10;
	        }
	        if(s[1]=='1')
	        {
	            cr+=10;
	        }
	        if(s[2]=='1')
	        {
	            cc+=10;
	        }
	        if(s[3]=='1')
	        {
	            cc+=10;
	        }
	    int ans=cc*cr;
	    cout<<ans<<endl;
	}

}
