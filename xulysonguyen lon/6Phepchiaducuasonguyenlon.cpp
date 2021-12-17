#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string N;
		long long M,s=0;
		cin>>N;
		cin>>M;
		for(int i=0;i<N.size();i++)
		s=(s*10+N[i]-'0')%M;
		cout<<s<<endl;
	}
}
