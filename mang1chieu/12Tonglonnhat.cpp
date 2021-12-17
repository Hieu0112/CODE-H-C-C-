#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int &n)
{
	for(int i=0;i<n;i++) cin>>a[i];
}
long count(int a[],int n,int b[],int m)
{
	long sum=0,s=0,s1=0;
	for(int i=0;i<n;i++)
	{
		s+=a[i];
		s1=s;
		for(int j=i+1;j<m;j++)
		{
			s1+=b[j];
		}
		sum=max(sum,s1);
	}
	return sum;
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int a[n],b[m];
		nhap(a,n);
		nhap(b,m);
		cout<<max(count(a,n,b,m),count(b,m,a,n));
		cout<<endl;
	}
}
