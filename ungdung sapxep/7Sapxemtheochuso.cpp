#include<bits/stdc++.h>
using namespace std;
bool CMP(string a,string b)
{
	string x=a+b,y=b+a;
	return x>y;
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s[n];
		for(int i=0;i<n;i++)
		cin>>s[i];
		sort(s,s+n,CMP);
		for(int i=0;i<n;i++) cout<<s[i];
		cout <<endl;
	}
}
