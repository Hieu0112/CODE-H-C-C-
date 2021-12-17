#include<bits/stdc++.h>
using namespace std;
long long bcnn(long long x,long long y)
{
	long long s=x*y;
	while(x*y!=0)
	{
		if(x>y) x%=y;
		else y%=x;
	}
	return s/(x+y);
}
main()
{int t;
cin>>t;
long long a,b,c,n,x;
while(t--)
{
	cin>>a>>b>>c>>n;
	x=pow(10,n-1);
	long long s=bcnn(bcnn(a,b),c);
	if(s/x>=10) cout<<"-1";
	else{
		long long nguyen = x/s;
		long long du=x%s;
		if(nguyen==0) cout<<s;
		else{
			if(du==0) cout<<x;
			else cout<<nguyen*s+s;
		}
	}	
	cout<<endl;	
	}
}
