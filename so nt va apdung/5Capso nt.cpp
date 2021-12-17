#include<bits/stdc++.h>
using namespace std;
main()
{
	bool a[10009];
	a[0]=false;
	a[1]=false;
	for(int i=2;i<=10009;i++) a[i]=true;
	for(int i=2;i<=10009;i++)
	for(int j=2*i;j<=10009;j+=i)
	if(a[i]) a[j]=false;
	int t;
	cin>>t;
	while(t--)
	{
		int N;
		cin>>N;
		for(int i=2;i<=N-2;i++)
		if(a[i]&&a[N-i]) {
			cout<<i<<" "<<N-i;
			break;
		}
		cout<<endl;
	}
}
