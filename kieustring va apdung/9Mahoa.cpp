#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		string a;
		cin>>a;
		a+=" ";
		for(int i=0;i<a.length()-1;i++)
		{
			for(int j=i;j<a.length();j++)
			{
				if(a[i]!=a[j]) {
					cout<<a[i]<<j-i;
					i=j;
				}
			}
		}
		cout<<endl;
	}
}
