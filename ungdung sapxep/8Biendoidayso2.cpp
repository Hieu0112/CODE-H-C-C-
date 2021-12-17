#include<bits/stdc++.h>
using namespace std;
main()
{
	short t;
	long n,i;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long a[n];
		for(i=0;i<n;i++)
		cin>>a[i];
		cout<<a[0]*a[1]<<" ";
		for(i=1;i<n-1;i++)
		cout<<a[i-1]*a[i+1]<<" ";
		cout<<a[i-1]*a[i];
		cout<<endl;
	}
}

