#include<bits/stdc++.h>
using namespace std;
main()
{
	string a;
	cin>>a;
	for(int i=0;i<a.length();i++)
	{
		a[i]=tolower(a[i]);
		if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u'&&a[i]!='y')
		cout<<"."<<a[i];
	}
}

