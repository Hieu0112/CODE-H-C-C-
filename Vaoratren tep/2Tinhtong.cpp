#include<bits/stdc++.h>
using namespace std;
bool checkINT(string s)
{
	int dem=0;
	while(s[0]=='0') s.erase(0,1);
	for(int i=0;i<s.size();i++)
	if(s[i]>='0'&&s[i]<='9') dem++;
	else return false;
	if(dem>10) return false;
	return true;
}
int TongS(string s)
{
	int tong=0;
	for(int i=0;i<s.size();i++)
	tong=10*tong+s[i]-'0';
	return tong;
}
main()
{
	ifstream FILE("DATA.in");
	long long tong=0;
	while(!FILE.eof())
	{
		string s;
		FILE>>s;
		if(checkINT(s)) tong+=TongS(s);
	}
	cout<<tong;
	FILE.close();
}
