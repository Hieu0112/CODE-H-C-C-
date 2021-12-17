#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	char x;
	cin>>t;
	while(t--)
	{
		cin>>x;
		if(x>='a' && x<='z') x-=32;
		else if(x>='A'&&x<='Z') x+=32;
		cout<<x<<endl;
	}
}
