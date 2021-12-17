#include<bits/stdc++.h>
using namespace std;
bool a[1000009]={false};
main()
{
	a[0]=true;
	a[1]=true;
	for(int i=2;i<=1000009;i++)
	for(int j=2*i;j<=1000009;j+=i)
	if(!a[i])
 	a[j]=true;
	 	
	int t;
	cin>>t;
	while(t--)
	{
		long long N,M,count=0;
		cin>>N>>M;
		long n=sqrt(N);
		if(n%2==0) n++;
		if(N<=4) count++;
		for(int i=n;i<=sqrt(M);i+=2)
		{
			if(!a[i]) count++;
		}
		cout<<count<<endl;	
	}
}
