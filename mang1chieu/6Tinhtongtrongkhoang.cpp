#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,Q;
		cin>>n>>Q;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		while(Q--)
		{
			int L,R;
			int count=0;
			cin>>L>>R;
			for(int i=L-1;i<R;i++)
			count+=a[i];
			cout<<count<<endl;
		}
	}
}
