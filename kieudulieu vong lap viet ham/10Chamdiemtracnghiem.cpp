#include<bits/stdc++.h>
using namespace std;
string s1="ABBADCCABDCCABD";
string s2="ACCABCDDBBCDDBB";
double check(string s,int k)
{
	double dem=0;
	string x;
	if(k==1)	x=s1;
	else x=s2;
	for(int i=0;i<15;i++)
	if(s[i]==x[i]) dem++;
	return dem*10/15;
}
main()
{
	int t;
	string ss;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		getline(cin,ss);
		int k=(ss[0]-'0')*100+(ss[1]-'0')*10+ss[2]-'0';
		string s="";
		for(int i=4;i<ss.length();i++)
		if(ss[i]!=' ') s=s+ss[i];
		k-=100;
		cout<<fixed<<setprecision(2)<<check(s,k)<<endl;
	}
}
