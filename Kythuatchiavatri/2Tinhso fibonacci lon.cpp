#include<bits/stdc++.h>
using namespace std;
long modulo=1e9+7;
main()
{
	long long a[1001];
	a[0]=0;
	a[1]=1;
	for(int i=2;i<1000;i++)
	a[i]=(a[i-1]+a[i-2])%modulo;
	int t;
	cin>>t;
	while(t--)
		{
		int n;
		cin>>n;
		cout<<a[n]<<endl;	
		}
	}
