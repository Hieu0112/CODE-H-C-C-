#include<iostream>
using namespace std;
main()
{
	int t,count;
	cin>>t;
	while(t--)
	{
	string a;
	cin>>a;
	for(int i=0;i<a.length();i++)
	{
	count=0;
	for(int j=0;j<a.length();j++)
	{
		if(a[i]!=a[j]) count++;
	}
	if(count==a.length()-1) cout<<a[i];
	}
	cout<<endl;
	}
}

