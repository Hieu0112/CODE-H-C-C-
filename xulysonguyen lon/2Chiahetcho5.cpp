#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int r=0;
		string s;
		cin>>s;
		for(int i=0;i<s.size();i++)
		{
			r=(2*r+s[i]-'0')%5;
		}
		if(r==0) cout<<"Yes";
		else cout<<"No";
		cout<<endl;
	}
}
