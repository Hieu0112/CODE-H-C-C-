#include<bits/stdc++.h>
using namespace std;
void data(int *a,int n)
{
	for(int i=0;i<n;i++)
	cin>>a[i];
}
main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n],b[n];
		data(a,n);
		data(b,n);
		int maxs=0;
		for(int i=0;i<n;i++){
		int s1=0,s2=0;
		for(int j=i;j<n;j++)
		{
			s1+=a[j];
			s2+=b[j];
			if(s1==s2) maxs=max(maxs,j-i+1);
		}
	}
	cout<<maxs<<endl;
	}
}
