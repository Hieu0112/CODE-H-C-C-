#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long a,b,c;
		cin>>a>>b>>c;
		long s=1;
		for(long i=0;i<b;i++)
		{
			s=(s*a)%c;
		}
		cout<<s<<endl;
	}
}
