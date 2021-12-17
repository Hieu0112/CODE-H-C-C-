#include<bits/stdc++.h>
using namespace std;
long long ucln(long long x,long long y)
{
	while(x*y!=0)
	{
		if(x>y) x%=y;
		else y%=x;
	}
	return x+y;
}
main()
{
	int t;
	cin>>t;
	long long a,x,y;
	while(t--)
	{
		cin>>a>>x>>y;
		for(int i=0;i<ucln(x,y);i++)
		cout<<a;
		cout<<endl;
	}
}
