#include<bits/stdc++.h>
using namespace std;
string dao(string s)
{
	string a="";
	for(int i=0;i<s.size();i++)
	a=s[i]+a;
	return a;
}
string tong(string a,string b)
{
	a=dao(a),b=dao(b);
	string s="";
	int x=a.size(),y=b.size();
	a=a+'0';
	for(int i=0;i<x-y+1;i++) b=b+'0';
	
	int t=0,du=0;
	
	for(int i=0;i<=x;i++){
		t=a[i]-'0'+b[i]-'0'+du;
		du=t/10;
		t%=10;
	s+=char(t+'0');	
	}
	s=dao(s);
	if(s[0]=='0') s.erase(0,1);
	return s;
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a,b;
		cin>>a>>b;
		if(a.size()>b.size()) cout<<tong(a,b);
		else	cout<<tong(b,a);
		cout<<endl;
	}
}
