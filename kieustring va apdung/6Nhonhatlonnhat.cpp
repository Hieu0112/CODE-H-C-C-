#include<bits/stdc++.h>
using namespace std;
string max(int n,int m)
{
	string s="";
	while(m>=9)
	{
		s+='9';
		m-=9;
	}
	m+='0';
	if(m!='0') s+=m;
	for(int i=0;i<s.length()-n;i++)
	s+='0';
	return s;
}
string min(string s)
{
	int j=1;
	string k="";
	for(int i=s.length()-1;i>=0;i--)
	{
		k=k+s[i];
	}
	if(k[0]=='0')
	{
		for(int i=0;i<k.length();i++)
		{
			if(k[i]!='0') {
				k[i]-=1;
				break;
			}
		}
		k[0]='1';
	}
	return k;
}
main()
{
	int m,s;
	cin>>m>>s;
	if((s==0&&m>1)||m*9<s) cout<<"-1 -1";//2*9<37;
	else{
	string a=max(m,s);
	string b=min(a);
	cout<<b<<" "<<a;
	}
}
