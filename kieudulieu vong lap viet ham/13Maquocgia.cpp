#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>s;
		s.erase(s.find("084"),3);
		cout<<s<<endl;
	}
}
