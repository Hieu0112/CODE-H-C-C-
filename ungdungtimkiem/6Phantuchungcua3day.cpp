#include<bits/stdc++.h>
using namespace std;
int main()
{
	short t;
	cin>>t;
	while(t--)
	{
		long n,m,p;
		cin>>n>>m>>p;
		long long a[n],b[m],c[p],d[n],s[p];
	
		for(long i=0;i<n;i++)	cin>>a[i];
	
		for(long i=0;i<m;i++)	cin>>b[i];
	
		for(long i=0;i<p;i++)	cin>>c[i];
	
	long x=0,y=0,z=0,kt=0,j=0;
	while(x<n&&y<m)
	{
		if(a[x]==b[y])
		{
			kt=1;
			d[j++]=a[x];
			x++;y++;
		}
		else if(a[x]>b[y]) y++;
		else x++;
	}
	if(kt==0) cout<<"-1";
	else{
		int x1=0,y1=0,kt2=0,j1=0;
		while(x1<j&&y1<p)
		{
			if(d[x1]==c[y1])
			{
				kt2=1;
				s[j1++]=d[x1];
				x1++;
				y1++;
			}
			else if(d[x1]>c[y1]) y1++;
			else x1++;
		}
		if(kt2==0) cout<<"-1";
		else{
			for(long i=0;i<j1;i++) cout<<s[i]<<" ";
		}
	}
	cout<<endl;
	}
}



