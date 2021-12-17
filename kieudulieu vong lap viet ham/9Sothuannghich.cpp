#include<bits/stdc++.h>
using namespace std;
bool check(string s)
{
	for(int i=0;i<s.length()/2;i++)
	return(s[i]!=s[s.length()-1-i]);
	return false;
}
main()
{
	int i,t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int k=check(s);
		if(k==true) cout<<"NO";
		else cout<<"YES";
		cout<<endl;
	}
}
