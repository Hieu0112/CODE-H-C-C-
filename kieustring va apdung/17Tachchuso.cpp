#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		multiset<char>a;
		cin>>s;
		int dem=0;
		for(int i=0;i<s.length();i++)
		if(s[i]<='9'&&s[i]>='0') dem+=s[i]-'0';
		else a.insert(s[i]);
		for(multiset<char>::iterator it=a.begin();it!=a.end();it++) cout<<*it;
		cout<<dem<<endl;
	}
}
