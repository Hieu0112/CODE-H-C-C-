#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int dem=0;
		string s;
		cin>>s;
		int x=s.find("100");
		if(x!=-1)
		{
			while(true)
			{
				x=s.find("100");
				if(x==-1) break;
				s.erase(x,3);
				dem+=3;
			}
			cout<<dem<<endl;
		}
	}
}
