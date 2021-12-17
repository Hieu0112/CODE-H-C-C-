#include<bits/stdc++.h>
using namespace std;
long long so(long long s,int a)
{
	return s*a;
}
main()
{
	int n,i;
	long long s=1,kq=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
	s=so(s,i);
	kq+=s;
	}
	cout<<kq;
}
