#include<bits/stdc++.h>
using namespace std;
bool check(string s)
{
	for(int i=0;i<s.length()-1;i++)
	if(s[i]-1!=s[i+1]&&s[i]+1!=s[i+1])
	{
		cout<<"NO";
		return false;
	}
	cout<<"YES";
	return true;
}
main()
{
	int t;
	string s;
	cin>>t;
	while(t--)
	{
	cin>>s;
	check(s);
	cout<<endl;
	}
}
