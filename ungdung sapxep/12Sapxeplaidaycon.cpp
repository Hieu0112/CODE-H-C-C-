#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long n,i,x,y;
		cin>>n;
		long a[n],b[n];
		for(i=0;i<n;i++){
		cin>>a[i];
		b[i]=a[i];}
		sort(a,a+n);
		for(i=0;i<n;i++)
		{
			if(a[i]!=b[i]) {
			x=i;break;}
		}
		for(i=n-1;i>=0;i--)
		{
			if(a[i]!=b[i]) {
				y=i;
				break;
			}
		}
		cout<<x+1<<" "<<y+1<<endl;
	}
}

