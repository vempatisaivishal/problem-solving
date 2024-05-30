#include <bits/stdc++.h>
using namespace std;

int main() {
	//mode is defined character with maximum frequency
	//n is string size then we have n*(n+1)/2 are number of sub strings
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    unordered_map<int,int>ump;
	    ump[0]++;
	    long long int ans=n*1ll*(n+1)/2;
	    int val=0;
	    for(auto i:s)
	    {
	        if(i=='1')
	        {
	            val+=1;
	        }
	        else
	        {
	            val-=1;
	        }
	        ans+=ump[val];
	        ump[val]+=1;
	    }
	    cout<<ans<<endl;
	}

}
