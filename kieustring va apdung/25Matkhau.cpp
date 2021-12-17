#include<bits/stdc++.h>
using namespace std;
main()
{
	long n,i,j,x,dem=0,y;
	cin>>n;
	string a[n];
	for(i=0;i<n;i++ ) cin>>a[i];
	sort(a,a+n);
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			x=a[i].find(a[j]);
			y=a[j].find(a[i]);
			if(x>=0) dem++;
			if(y>=0) dem++;
		}
	}
	cout<<dem<<endl;
}

