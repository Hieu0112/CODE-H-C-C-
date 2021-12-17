#include<bits/stdc++.h>
using namespace std;
#define ll long long
string nhan(string s1,string s2)
{
	string s="";
	vector<int>a(s1.size()+s2.size()+1,0);
	for(int i=s1.size()-1;i>=0;i--){
		for(int j=s2.size()-1;j>=0;j--){
			a[i+1+j]+=(s1[i]-'0')*(s2[j]-'0');
		}
	}
	for(int i=s1.size()+s2.size()-1;i>=0;i--){
		if(a[i]>=10)	a[i-1]+=a[i]/10;
		a[i]%=10;
	}
	if(a[0]!=0)	s+=(a[0]+'0');
	for(int i=1;i<s1.size()+s2.size();i++){
		s+=(a[i]+'0');
	}
	return s;	
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s1,s2;
		cin>>s1>>s2;
		cout<<nhan(s1,s2)<<endl;
	}
}
