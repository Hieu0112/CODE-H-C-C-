#include<bits/stdc++.h>
using namespace std;
main()
{
	int t,k;
	int so='z'-'a'+1;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		string a;
		cin>>a;
		cin>>k;
		set<char>s;
		for(int i=0;i<a.length();i++)
		s.insert(a[i]);
		if(s.size()>=so-k) cout<<1;
		else cout<<0;
		cout<<endl;
	}
}
