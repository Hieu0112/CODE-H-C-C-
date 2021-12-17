#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		int x=0;
		string a,s;
		getline(cin,a);
		stringstream ss(a);
		while(ss>>a) x++;
		cout<<x<<endl;
	}
}
