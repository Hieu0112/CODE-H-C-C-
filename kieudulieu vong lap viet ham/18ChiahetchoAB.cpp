#include<bits/stdc++.h>
using namespace std;
int bcnn(int a,int b)
{
	int s=a*b;
	while(a*b!=0)
	{
		if(a>b) a%=b;
		else b%=a;
	}
	return s/(a+b);
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int dem,a,b,x,y;
		dem=0;
		cin>>a>>b>>x>>y;
		for(int i=a;i<=b;i++)
		if(i%x==0||i%y==0) dem++;
		cout<<dem<<endl;
	}
}
