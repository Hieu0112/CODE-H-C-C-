#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		int dem=0,z;
		cin>>s;
		for(int i=0;i<s.length();i++)
		if(s[i]>'9') s[i]=' ';
		stringstream ss(s);
		while(ss>>z)
		dem+=z;
		cout<<dem<<endl;
	}
}
