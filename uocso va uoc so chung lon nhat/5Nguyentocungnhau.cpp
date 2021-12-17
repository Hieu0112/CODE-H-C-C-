#include<bits/stdc++.h>
using namespace std;
bool check(int n)
{
	if(n<2) return false;
	else{
		for(int i=2;i<=sqrt(n);i++)
		if(n%i==0) return false;
	}
	return true;
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,count=0;
		cin>>x;
		for(int i=1;i<x;i++)
		if(__gcd(i,x)==1) count++;
		if(check(count))
		cout<<1;
		else cout<<0;
		cout<<endl;
	}
}
