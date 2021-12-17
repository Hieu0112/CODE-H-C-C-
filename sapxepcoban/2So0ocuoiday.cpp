#include<bits/stdc++.h>
using namespace std;
int main()
{
	long t,n,i,dem;
	cin>>t;
	while(t--)
	{dem=0;
		cin>>n;
		long long a[n];
		for(i=0;i<n;i++)
		{cin>>a[i];}
		
		for(i=0;i<n;i++)
		{
			if(a[i]==0) dem++;
			else cout<<a[i]<<" ";
		}
	while(dem--)
	{
		cout<<0<<" ";
		
	}
	cout<<endl;
	}
}

