#include<bits/stdc++.h>
using namespace std;
main()
{
	long n,i,j,t,k;
	cin>>t;
	while(t--)
	{	
		k=0;
		cin>>n;
		long a[n];
		for(i=0;i<n;i++)
		cin>>a[i];
		for(i=1;i<n;i++)
		{
			for(j=0;j<i;j++)
				if(a[i]==a[j])
				{
					k=1,cout<<a[i];
					break;
				}
				if(k==1) break;
		}
		if(k==0) cout<<-1;
		cout<<endl;
	}
}

