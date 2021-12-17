#include<bits/stdc++.h>
using namespace std;
main()
{
	double s,n;
	cin>>n;
		s=0;
		for(double i=1;i<=n;i++)
		s+=1/i;
		cout<<fixed<<setprecision(4)<<s<<endl;
}

