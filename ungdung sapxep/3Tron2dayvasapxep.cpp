#include<iostream>
#include<set>
using namespace std;
main()
{
	int t;
	long n,m;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cin>>m;
		long a[n];
		long b[m];
		multiset<long>arr;
		for(long i=0;i<n;i++)
		{
			cin>>a[i];
			arr.insert(a[i]);
		}
		for(long i=0;i<m;i++)
		{
			cin>>b[i];
			arr.insert(b[i]);
		}
		for(multiset<long>::iterator it=arr.begin();it!=arr.end();it++)
		cout<<*it<<" ";
		cout<<endl;
	}
}

