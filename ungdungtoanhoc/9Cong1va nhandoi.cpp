#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		int mod2=0,tru1=0;
		for(int i=0;i<n;i++)
		{
			int k=0;
			while(a[i]!=0)
			{
			if(a[i]%2==0)
			{
				a[i]/=2;
				k++;
			}
			else {
			tru1++;
			a[i]-=1;
			}
		}
			mod2=max(k,mod2);
	}
	cout<<mod2+tru1<<endl;
	}	
}
