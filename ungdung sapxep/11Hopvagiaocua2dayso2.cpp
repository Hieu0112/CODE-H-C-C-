#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int c[100000];
main()
{
	short t;
	cin>>t;
	int n,m,i;
	while(t--)
	{
	cin>>n>>m;
	int maxs=max(m,n);
	int a[n],b[m],art[maxs],x=0,art1[maxs],y=0;
	for(i=0;i<n;i++)
	{cin>>a[i];
	c[a[i]]++;
	if(c[a[i]]==1) art[x++]=a[i];
	if(c[a[i]]>1) c[a[i]]=1;
	}
	for(i=0;i<m;i++)
	{cin>>b[i];
	c[b[i]]++;
	if(c[b[i]]==1) art[x++]=b[i];
	if(c[b[i]]==2) art1[y++]=b[i];
	}
	sort(art,art+x);
	sort(art1,art1+y);
	for(i=0;i<x;i++)
	cout<<art[i]<<" ";
	cout<<endl;
	for(i=0;i<y;i++)
	cout<<art1[i]<<" ";
	cout<<endl;
	for(i=0;i<x;i++)c[art[i]]=0;
}
}

