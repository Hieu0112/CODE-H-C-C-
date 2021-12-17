#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long n,k;
		cin>>n>>k;
		int *a=new int[n];
		for(long i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		bool check =false;
		long dau=0,cuoi=n-1,mid=(dau+cuoi)/2;
		while(dau<cuoi)
		{
			if(a[mid]>k) cuoi=mid-1;
			else if(a[mid]<k) dau=mid+1;
			mid=(dau+cuoi)/2;
			if(a[mid]==k) {
				check =true;
				break;
			}
		}
		if(!check) cout<<-1;
		else cout<<1;
		cout<<endl;
	}
}
