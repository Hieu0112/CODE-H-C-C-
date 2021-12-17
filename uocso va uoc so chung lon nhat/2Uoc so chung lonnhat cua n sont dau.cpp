#include<bits/stdc++.h>
using namespace std;
long LCM(long a,long b)
{
	return a*b/__gcd(a,b);
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long n,i,s=1;
		cin>>n;
		for(int i=1;i<=n;i++)
		s=LCM(s,i);
		cout<<s<<endl;
	}
}
