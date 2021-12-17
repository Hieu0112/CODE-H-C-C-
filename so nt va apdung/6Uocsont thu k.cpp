#include<bits/stdc++.h>
using namespace std;
main()
{
	short t;
	cin>>t;
	while(t--)
	{
		int n,k,count=0,x=-1;
		cin>>n>>k;
		while(n%2==0)
		{
			count++;
			if(count==k) x=2;
			n/=2;
		}
		for(int i=3;i<=sqrt(n);i+=2)
		{
		while(n%i==0)
		{
			count++;
			if(count==k) x=i;
			n/=i;
		}
		}
		if(n!=1) count++;
		if(count==k&&n!=1) x=n;
		cout<<x<<endl;
	}
}
