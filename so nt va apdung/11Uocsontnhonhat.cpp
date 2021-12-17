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
	short t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n>1) cout<<1<<" ";
		for(int i=2;i<=n;i++)
		{
			for(int j=2;j<=i;j++)
			if(i%j==0&&check(j)){
			cout<<j<<" ";
			break;
		}
		}
		cout<<endl;
	}
}
