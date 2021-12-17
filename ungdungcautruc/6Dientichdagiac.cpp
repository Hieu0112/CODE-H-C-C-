#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n],b[n];
		int s1=0,s2=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i]>>b[i];
		}
		for(int i=0;i<n-1;i++)
		{
			s1+=a[i]*b[i+1];
			s2+=b[i]*a[i+1];
		}
		s1+=a[n-1]*b[0];
		s2+=a[0]*b[n-1];
		double k=(double)s1-(double)s2;
		printf("%.3lf\n",k/2);
	}
}

