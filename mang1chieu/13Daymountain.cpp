#include<bits/stdc++.h>
using namespace std;
bool mountain(int *a,int x,int y)
{
	int t=y;
	for(int i=x;i<y;i++)
	{
		if(a[i]>=a[i+1]) {
			t=i ;break;
		}
	}
	if(t==y) return true;
	else{
	for(int i=t;i<y;i++)
	if(a[i]<a[i+1]) return false;
	return true;
	}
}
main()
{
	int t,n,L,R;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		cin>>L>>R;
		int k=mountain(a,L,R);
		if(k==1) cout<<"Yes\n";
		else cout<<"No\n";
	}
}

