#include<bits/stdc++.h>
using namespace std;
main()
{
	short t,n,i,j;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long a[n],s=-1,x;
		for(i=0;i<n;i++)	cin>>a[i];
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				x=a[j]-a[i];
				if(x>s) s=x;
			}
		}
		cout<<s<<endl;
	}
}

