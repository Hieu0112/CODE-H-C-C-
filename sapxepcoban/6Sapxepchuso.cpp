#include<bits/stdc++.h>
using namespace std;
main()
{
	int t,x,art[15];
	long n,i,m;
	cin>>t;
	while(t--)
	{
		int m=0;
		cin>>n;
		long long a[n+1];
		for(i=0;i<n;i++)
		cin>>a[i];
		for(i=0;i<n;i++)
		{long tach=a[i];
		while(tach!=0)
			{
				int dem=0;
				x=tach%10;
				for(int h=0;h<m;h++)
				if(art[h]!=x) dem++;
				if(dem==m) art[m++]=x;
				tach/=10;
			}
			if(m==11) break;
		}
		sort(art,art+m);
		for(i=0;i<m;i++)
		cout<<art[i]<<" ";
		cout<<endl;
	}
}

