#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long a,b,s1=0,s2=0,x,c=1,d=1,c1=1,d1=1;
		cin>>a>>b;
		x=a+b;
		while(a!=0)
		{
			int m=a%10;
			if(m==5) s1+=c;
			if(m==6) s2+=d;
			c*=10;
			d*=10;
			a/=10;
		}
		while(b!=0)
		{
			int n=b%10;
			if(n==5) s1+=c1;
			if(n==6) s2+=d1;
			c1*=10;
			d1*=10;
			b/=10;
		}
		cout<<x-s2<<" "<<x+s1;
		cout<<endl;
	}
}

