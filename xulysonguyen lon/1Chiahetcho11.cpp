#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int chan=0,le=0;
		string s;
		cin>>s;
		for(int i=0;i<s.size();i++)
		{
			if(i%2==0) chan+=s[i]-'0';
			else le+=s[i]-'0';
		}
		chan-=le;
		if(chan%11==0) cout<<"1";
		else cout<<"0";
		cout<<endl;
	}
}
