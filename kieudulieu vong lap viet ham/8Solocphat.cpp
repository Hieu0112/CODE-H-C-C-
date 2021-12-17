#include<bits/stdc++.h>
using namespace std;
bool check(string s)
{
	for(int i=0;i<s.length();i++)
	return (s[i]!='0'&&s[i]!='8'&&s[i]!='6');
	return false;
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int kt=check(s);
		if(check(s)==false) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}
