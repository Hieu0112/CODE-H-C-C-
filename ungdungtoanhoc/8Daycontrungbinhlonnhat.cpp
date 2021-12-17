#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long k,n;
		long max1,max2=-999999;
		cin>>n>>k;
		vector<long>arr(k);
		long a[n];
		for(long i=0;i<n;i++) cin>>a[i];
		for(long i=0;i<=n-k;i++)
		{
			max1=a[i];
			for(long j=i+1;j<i+k;j++)
			{
				max1+=a[j];
			}
			if(max1>max2){
				max2=max1;
				arr.clear();
				for(long j=i;j<i+k;j++)
				arr.push_back(a[j]);
			}
		}
		for(long i=0;i<k;i++) cout<<arr[i]<<" ";
		cout<<endl;
	}
}
