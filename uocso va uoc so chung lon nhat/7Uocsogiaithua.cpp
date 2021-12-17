#include<bits/stdc++.h>
using namespace std;
main()
{
	int t,p,k,x;
	cin>>t;
	while(t--)
	{
		x=0;
		cin>>p>>k;
		for(int i=k;i<=p;i+=k)
		{
			int n=i;
			while(n%k==0){
				x++;
				n/=k;
			}
		}
		cout<<x<<endl;
	}
}
