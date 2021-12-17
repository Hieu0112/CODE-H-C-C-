#include<bits/stdc++.h>
using namespace std;
bool check(int n)
{
	if(n<2) return false;
	else{
		for(int i=2;i<=sqrt(n);i++)
		if(n%i==0) return false;
	}
	return true;
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,s=1,count=0;
		cin>>n;
		for(int i=2;i<=n/2;i++)
		{
			if(check(i)&&n%i==0) {
			s*=i;count++;
			}
		}
		if(count==3&&s==n) cout<<"1";
		else cout<<"0";
		cout<<endl;
	}
}

