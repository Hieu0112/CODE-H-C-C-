#include<bits/stdc++.h>
using namespace std;
main()
{
	int t,n,k;
	cin>>t;
	while(t--)
	{
		k=0;
		cin>>n;
		int *a=new int[n];
		for(int i=0;i<n;i++) cin>>a[i];
		vector<int>b,c;
		sort(a,a+n);
		if(n%2) k=1;
		for(int i=0;i<n/2+k;i++)
		b.push_back(a[i]);
		for(int i=n/2+k;i<n;i++)
		c.push_back(a[i]);
		int x=0,y=0;
		for(int i=0;i<n;i++)
		if(i%2==0) cout<<b[x++]<<" ";
		else cout<<c[y++]<<" ";
		cout<<endl;
	}
}
		

