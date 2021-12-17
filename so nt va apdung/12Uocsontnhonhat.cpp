#include<bits/stdc++.h>
using namespace std;
bool check(long n)
{
	if(n<2) return false;
	else{
		for(long i=2;i<=sqrt(n);i++)
		if(n%i==0) return false;
	}
	return true;
}
main()
{
	short t;
	cin>>t;
	while(t--)
	{
		long n;
		cin>>n;
		if(n>1) cout<<1<<" ";
		for(int i=3;i<=n;i+=2)
		{
			cout<<2<<" ";
			for(int j=3;j<=i;j+=2)
			if(i%j==0&&check(j)){
			cout<<j<<" ";
			break;
		}
		}
		if(n%2==0) cout<<2;
		cout<<endl;
	}
}
