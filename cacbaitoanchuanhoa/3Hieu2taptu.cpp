#include<bits/stdc++.h>
#define max 10000
using namespace std;

void DELETE(string s1[max],string s2[max],int n,int m)
{
	for(int i=0;i<n;i++){
	bool check = true;
	
	for(int j=0;j<m;j++)
	if(s1[i]==s2[j]) {
	check=false;
	break;}
	if(check) cout<<s1[i];
	if(i!=n-1&&check) cout<<" ";
}
}
main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		int i=0,j=0;
		string a,b,s1[max],s2[max],x;
		getline(cin,a);
		getline(cin,b);
		stringstream sa(a);
		while(sa>>x)
		{
			bool check=true;
			for(int k=0;k<i;k++)
			if(s1[k]==x) check=false;
			if(check ) s1[i++]=x;
		}
		sort(s1,s1+i);
		stringstream sb(b);
		while(sb>>x)
		{
			s2[j++]=x;
		}
		DELETE(s1,s2,i,j);
		cout<<endl;
	}
}

