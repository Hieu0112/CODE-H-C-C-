#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long a,s=0;
		string b;
		cin>>a;
		cin>>b;
		for(int i=0;i<b.size();i++)
		s=(10*s+b[i]-'0')%a;
		cout<<__gcd(s,a)<<endl;
	}
}
