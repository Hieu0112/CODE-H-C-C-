#include<bits/stdc++.h>
using namespace std;
bool a[1000009]={false};
main()
{
	for(long i=2;i<=1000009;i++)
	for(long j=2*i;j<=1000009;j+=i)
	if(a[i]==false)	a[j]=true;

	long t,n;
	cin>>t;
	while(t--)
	{
		bool check=false;
		cin>>n;
		if(a[n-2]==0) {
			cout<<2<<" "<<n-2;
			check=true;
		}
		if(check==false)
		for(long i=3;i<=n/2;i+=2)
		if(a[i]==false&&a[n-i]==false){
			check=true;
			cout<<i<<" "<<n-i;
			break;
		}
		if(check==false) cout<<-1;
		cout<<endl;
	}
}

