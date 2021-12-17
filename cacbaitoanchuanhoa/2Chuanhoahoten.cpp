#include<bits/stdc++.h>
using namespace std;
main()
{
	int n=0;
	string s,a,art[100];
	getline(cin,s);
	stringstream ss(s);
	while(ss>>a){
		art[n++]=a;
	}
	for(int i=0;i<n;i++)
	{
		art[i][0]=toupper(art[i][0]);
		cout<<art[i][0];
		for(int j=1;j<art[i].length();j++)
		{
		if(i<n-1) art[i][j]=tolower(art[i][j]);
		else art[i][j]=toupper(art[i][j]);
		cout<<art[i][j];
		}
		if(i==n-2) cout<<",";
		if(i<n-1) cout<<" ";
	}
}

