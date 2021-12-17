#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,a,art[100];
	int n=0;
	getline(cin,s);
	for(int i=0;i<s.length();i++)
	s[i]=tolower(s[i]);
	stringstream s2(s);
	while(s2>>a)
	{
	art[n++]=a;	
	}
	cout<<art[n-1];
	for(int i=0;i<n-1;i++)
	cout<<art[i][0];
	cout<<"@ptit.edu.vn"; 
}

