#include<bits/stdc++.h>
using namespace std;
int n,a[100][100],h=0;
void nhap()
{
	h=0;
	cin>>n;
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	cin>>a[i][j];
}
void solve(){
	int max1=0;
	for(int i=0;i<n;i++)
	{
		int dem=0;
		for(int j=0;j<n;j++)
		{
			dem+=a[i][j];
			h+=a[i][j];
		}
		max1=max(max1,dem);
	}
	int max2=0;
	for(int i=0;i<n;i++)
	{
		int dem=0;
		for(int j=0;j<n;j++)
		{
			dem+=a[j][i];
		}
		max2=max(max2,dem);
	}
	cout<<max(max1,max2)*n-h<<endl;
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		nhap();
		solve();
	}
}
