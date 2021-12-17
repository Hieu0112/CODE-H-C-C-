#include<bits/stdc++.h>
#define ll long long
using namespace std;
main()
{
	ll t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll a[n],maxs=-9999999,max1,max2;
		for(ll i=0;i<n;i++) {
		cin>>a[i];
		maxs=max(maxs,a[i]);
		}
		if(maxs<=0) cout<<maxs<<endl;
		else{
			max2=a[0];
			max1=0;
			for(ll i=0;i<n;i++)
			{
				if(max1+a[i]<=0) max1=0;
				else{
					max1+=a[i];
					max2=max(max2,max1);
				}
			}
			cout<<max2<<endl;
		}
	}
}
