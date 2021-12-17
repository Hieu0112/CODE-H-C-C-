#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,sum=0,maxs=0;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
			maxs=max(maxs,a[i]);
		}
		if(sum<=k) cout<<-1;
		else{
			if(maxs>k) cout<<1;
			else{
			int dau=0,tong=0,cuoi=0;
			int dodai=n;
			while(cuoi<n)
			{
				while(tong<=k) tong+=a[cuoi++]; 
				while(tong>k)
				{
				dodai=min(dodai,cuoi-dau);
				tong-=a[dau++];	
				}
			}
			cout<<dodai;
		}
	}
	cout<<endl;
}
}
