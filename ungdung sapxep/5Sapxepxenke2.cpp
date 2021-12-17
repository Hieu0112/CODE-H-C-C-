#include<iostream>
#include<algorithm>
using namespace std;
main()
{
	short t,n,i,x,y;
	cin>>t;
	while(t--)
	{
		cin>>n;
		short a[n];
		x=0,y=n-1;
		for(i=0;i<n;i++)
		cin>>a[i];
		sort(a,a+n);
		for(i=0;i<n;i++)
		{
			if(i%2==0) cout<<a[y--]<<" ";
			else cout<<a[x++]<<" ";
		}
		cout<<endl;
	}
}

