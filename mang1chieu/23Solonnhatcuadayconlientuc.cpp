#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		multiset<int >arr;
		for(int i=0;i<n;i++)
		cin>>a[i];
		for(int i=0;i<k;i++)
		arr.insert(a[i]);
		for(int  i=k;i<n;i++)
		{
			cout<<*arr.rbegin()<<" ";
			arr.erase(arr.find(a[i-k]));
			arr.insert(a[i]);
		}
		cout<<*arr.rbegin()<<" ";
		cout<<endl; 
	}
}
