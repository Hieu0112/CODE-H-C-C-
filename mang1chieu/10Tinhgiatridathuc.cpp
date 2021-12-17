#include<bits/stdc++.h>
using namespace std;
long x=1e9+7;
long modulo(int a,int b)
{
	if(b==0) return 1;
	else{
		long t=modulo(a,b/2)%x;
		if(b%2==0) return (t*t)%x;
		else return (a*((t*t)%x))%x;
	}
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		long s=0;
		int a[n];
		for(int i=n-1;i>=0;i--)
		{cin>>a[i];
		s=(s+a[i]*modulo(k,i))%x;
		}
		cout<<s<<endl;
	}
}
