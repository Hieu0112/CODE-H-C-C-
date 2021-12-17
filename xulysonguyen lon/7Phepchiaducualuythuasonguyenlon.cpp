#include<bits/stdc++.h>
using namespace std;
#define ll long long
long long mod(ll a,ll b,ll c)
{
	if(b==0) return 1;
	else if(b==1) return a;
	else{ll x=(a%c)*(a%c)%c;
		if(b%2==0) return mod(x,b/2,c)%c;
		else return (a*mod(x,b/2,c)%c)%c;
	}
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a;
		ll b,c,s=0;
		cin>>a;
		cin>>b>>c;
		for(int i=0;i<a.size();i++)
		{
			s=(10*s+a[i]-'0')%c;
		}
		cout<<mod(s,b,c)<<endl;
	}
}
