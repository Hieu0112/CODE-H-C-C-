#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int count=0;
		long long n;
		cin>>n;
		while(n%2==0)
		{
			n/=2;
			count ++;
		}
		if(count!=0) cout<<"2"<<" "<<count<<" ";
		for(int i=3;i<=sqrt(n);i+=2)
		{
			count=0;
			while(n%i==0)
			{
				count++;
				n/=i;
			}
			if(count>0)	cout<<i<<" "<<count<<" ";
		}
		if(n!=1) cout<<n<<" 1";
		cout<<endl;
	}
}
