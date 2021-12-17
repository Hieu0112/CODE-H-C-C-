#include<bits/stdc++.h>
using namespace std;
int Nhiphan(long a[],int n,int k)
{
	int x=0,y=n-1;
	while(x<=y)
	{
		int mid=(x+y)/2;
		if(a[mid]==k) return 1;
		else if(a[mid]>k) y=mid-1;
		else x=mid+1;
	}
	return -1;
}
main()
{
	int t,test,x,n;
	cin>>t;
	while(t--)
	{
		test =-1;
		cin>>n;
		cin>>x;
		long a[n];
		for(int i=0;i<n;i++)	cin>>a[i];
		for(int i=0;i<n;i++)
		{
			test=Nhiphan(a,n,x+a[i]);
			if(test==1) break;
		}
		cout<<test<<endl;
	}
}

