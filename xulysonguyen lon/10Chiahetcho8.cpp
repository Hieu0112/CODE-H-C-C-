#include<bits/stdc++.h>
using namespace std;
string s;int n;
void nhap()
{
	cin>>s;
	n=s.size();
}
int chiahet(int x)
{int i,j;
int dem=0;
long long k;
	for(i=0;i<n;i++)
		{
			k=0;
				for(j=i;j<n;j++)
				{
					k=(k*10+(s[j]-'0'))%x;
					if(k==0) dem++; 
				}
			}
		return dem;
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
	nhap();
	cout<<chiahet(8)-chiahet(24)<<endl;
	}
}
