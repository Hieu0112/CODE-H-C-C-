#include<bits/stdc++.h>
using namespace std;
main()
{
	int n;
	cin>>n;
	cin.ignore();
	string s;
	set<string>arr;
	for(int i=0;i<n;i++)
	{
		getline(cin,s);
		arr.insert(s);
	}
	cout<<arr.size();
}
