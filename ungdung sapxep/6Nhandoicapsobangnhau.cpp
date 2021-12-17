#include<bits/stdc++.h>
using namespace std;
main()
{
	int t,i,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
		cin>>a[i];
		for(i=0;i<n-1;i++)
		{
			if(a[i]==a[i+1]){
				a[i]*=2;
				a[i+1]=0;
			}
		}
		int dem=0;
		for(i=0;i<n;i++)
		if(a[i]!=0) {
		cout<<a[i]<<" "; dem++;}
		int x=n-dem;
		while(x--) cout<<"0 ";
		cout<<endl;
	}
}

