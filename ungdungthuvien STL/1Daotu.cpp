#include<bits/stdc++.h>
using namespace std;
main()
{
	int n,i,t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
	n=0;
	string s,s1,art[1000];
	getline(cin,s);
	stringstream ss(s);
	while(ss>>s1)
	{
	art[n++]=s1;	
	}
	for(i=n-1;i>=0;i--)
	cout<<art[i]<<" ";
	cout<<endl;}
}


