#include<bits/stdc++.h>
using namespace std ;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin>>s;
	if(s[s.length()-2]=='8'&&s[s.length()-1]=='6')
	cout<<"1";
	else cout<<"0";
	cout<<endl;
	}
return 0;
}
