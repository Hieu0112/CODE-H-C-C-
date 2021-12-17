#include<bits/stdc++.h>
using namespace std;

long binary(long a[],long a1,long b,long k)
{
	long x=-2;
long dau=a1,cuoi=b-1,mid=(dau+cuoi)/2;
		while(dau<cuoi)
		{
			if(a[mid]>k) cuoi=mid-1;
			else if(a[mid]<k) dau=mid+1;
			mid=(dau+cuoi)/2;
			if(a[mid]==k) {
				x=mid;
				break;
			}
		}
		return x+1;
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long n,k,maxs=0,x=0;
		cin>>n>>k;
		long a[n];
		for(long i=0;i<n;i++) {
		cin>>a[i];
		if(maxs<a[i]){
			maxs=a[i];
			x=i;
		}
		}
		if(maxs==k) cout<<x;
		else{
			long A=binary(a,0,x,k);
			long B=binary(a,x,n,k);
			if(A<0) cout<<B;
			else cout<<A;
		}
		cout<<endl;
	}
}
		
		
		
