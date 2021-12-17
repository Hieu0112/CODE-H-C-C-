#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long n,count=0;
		cin>>n;
		vector<long>arr(1e6+1,0);
		long a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			arr[a[i]]++;
			if(arr[a[i]]>2)
			{
				count++;
			}
			else if(arr[a[i]]==2) count+=2;
		}
		cout<<count<<endl;
	}
}
