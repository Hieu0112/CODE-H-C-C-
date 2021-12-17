#include<bits/stdc++.h>
using namespace std;
main()
{
	int t,dem,count;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		dem=0,count=0;
		string s,a;
		getline(cin,s);
		stringstream s2(s);
		while(s2>>a)
		{
		int x=a[a.length()-1]-'0';
		if(x%2==0) dem++;
		if(x%2!=0) count++;
		}
		int k=count+dem;
		if((k%2==0&&dem>count)||(k%2!=0&&count>dem))cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}

