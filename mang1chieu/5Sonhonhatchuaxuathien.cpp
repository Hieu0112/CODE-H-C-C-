#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long n,j=1;
		cin>>n;
		long a[n],b[n];
		a[0]=0;
		for(int i=0;i<n;i++)
		{
		cin>>b[i];
		if(b[i]>0) a[j++]=b[i];
		}
		if(j==1) cout<<1;
	else{
		sort(a,a+j);
		bool check=true;
		for(int i=0;i<j-1;i++)
		{
			if(a[i]<a[i+1]-1) {
				cout<<a[i]+1;
				check=false;
				break;
			}
		}
		if(check) cout<<a[j-1]+1;
	}
	cout<<endl;
}
}
