#include<bits/stdc++.h>
using namespace std;
main()
{
	string s[20009];
	int x=0,i,y=0;
	while(cin>>s[x])
	{
		for(int j=0;j<s[x].length();j++) s[x][j]=tolower(s[x][j]);
		x++;
	}
	for(i=0;i<x;i++)
	{
		s[y][0]=toupper(s[y][0]);
		if(s[i][s[i].length()-1]=='!'||s[i][s[i].length()-1]=='.'||s[i][s[i].length()-1]=='?') {
			s[i].erase(s[i].length()-1,1);
			y=i+1;
			cout<<s[i]<<endl;
		}
		else cout<<s[i]<<" ";
	}
}

