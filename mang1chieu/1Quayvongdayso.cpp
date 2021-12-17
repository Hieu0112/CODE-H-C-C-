#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	long n,d;
	cin>>t;
	while(t--)
	{
		cin>>n>>d;
		int a[n];
		vector<int> arr(n);
		for(int i=0;i<d;i++)
		cin>>a[i];
		arr.clear();
		for(int i=d;i<n;i++)
		{
			cin>>a[i];
			arr.push_back(a[i]);
		}
		for(int i=0;i<d;i++)
		arr.push_back(a[i]);
		for(int i=0;i<arr.size();i++)
		cout<<arr[i]<<" ";
		cout<<endl;
	}
}
