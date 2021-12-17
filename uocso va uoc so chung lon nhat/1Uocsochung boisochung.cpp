#include<bits/stdc++.h>
using namespace std;
long long ucln(long long a,long long b)
{
	while(a*b!=0)
	{
		if(a>b) a%=b;
		else b%=a;
	}
	return a+b;
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long a,b,s;
		cin>>a>>b;
		s=a*b;
		cout<<s/ucln(a,b)<<" "<<ucln(a,b)<<endl;
	}
}
