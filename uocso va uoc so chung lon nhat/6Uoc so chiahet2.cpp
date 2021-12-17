#include<bits/stdc++.h>
using namespace std;
main()
{
	short t;
	long n,i,j;
	cin>>t;
	while(t--)
	{
		int dem=1;
		cin>>n;
		if(n%2==0)
		for(i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
			    j=n/i;
				if(i%2==0&&j%2==0&&i!=j) dem+=2;
				if(i%2==0&&j%2!=0) dem++;
				if(i%2!=0&&j%2==0) dem++;
				if(i%2==0&&j%2==0&&i==j) dem++;
			}
		}
		else dem=0;
		cout<<dem<<endl;
	}
}
