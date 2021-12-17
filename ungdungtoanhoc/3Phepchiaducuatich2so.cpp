#include<bits/stdc++.h>
using namespace std;
long long modulo(long long a,long long b,long long c)
{
	if(b==0) return 0;
	else{
		long long x=modulo(a,b/2,c);
		if(b%2==0) return(2*(x%c)%c)%c;
		else return (a%c+(2*(x%c)%c)%c)%c;
	}
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long a,b,c;
		cin>>a>>b>>c;
		cout<<modulo(a,b,c)<<endl;
	}
}
