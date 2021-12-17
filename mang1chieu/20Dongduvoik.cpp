#include<bits/stdc++.h>
using namespace std;
main()
{
	long t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long a[n],mins=999999,dem=0,GCD;
		for(int i=0;i<n;i++) {
		cin>>a[i];
		mins=min(mins,a[i]);
		}
		for(int i=0;i<n;i++) a[i]-=mins;
		GCD=a[0];
		for(int i=1;i<n;i++) GCD=__gcd(GCD,a[i]);
		
		for(int i=1;i<=sqrt(GCD);i++)
		{
			if(GCD%i==0) {
			if(i!=GCD/i)	dem+=2;
			else dem++;
		}
		}
		cout<<dem<<endl;
	}
}



