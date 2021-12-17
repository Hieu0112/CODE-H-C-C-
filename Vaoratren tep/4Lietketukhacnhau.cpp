#include<bits/stdc++.h>
using namespace std;
main()
{
	ifstream file("VANBAN.in");
	string s;
	set<string>arr;
	arr.clear();
	while(!file.eof())
	{
		file>>s;
		if(s.size()>=1){
		for(int i=0;i<s.size();i++)
		s[i]=tolower(s[i]);
		arr.insert(s);}
	}
	set<string>::iterator it=arr.begin();
	for(;it!=arr.end();it++)
	cout<<*it<<endl;
}
