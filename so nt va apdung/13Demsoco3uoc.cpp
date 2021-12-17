#include<bits/stdc++.h>
using namespace std;
bool a[1000009]={false};
main()
{
	for(int i=2;i<=1000009;i++)
	for(int j=2*i;j<=1000009;j+=i)
	if(!a[i]) a[j]=true;
	int t;
	cin>>t;
	while(t--)
	{
		long long n,dem=0;
		cin>>n;
		if(n>=4) dem++;
		for(int i=3;i<=sqrt(n);i+=2)
		if(!a[i]) {
		dem++;
		}
		cout<<dem<<endl;
	}
}
