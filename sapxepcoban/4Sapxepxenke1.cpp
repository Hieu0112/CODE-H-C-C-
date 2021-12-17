#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,a[1000],b[1000],h,t;
	cin>>t;
	while(t--)
	{	h=0;
		cin>>n;
		for(int i=0;i<n;i++)
		cin>>a[i];
		sort(a,a+n);
		int x=0,y=0;
		for(int i=n-1;i>=0;i--)
		b[h++]=a[i];
		for(int i=0;i<n;i++)
	{
		if(i%2==0) cout<<b[x++]<<" ";
		else cout<<a[y++]<<" ";
	}
	cout<<endl;
	}
}

