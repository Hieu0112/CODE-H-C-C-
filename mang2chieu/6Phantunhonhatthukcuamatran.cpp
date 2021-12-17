#include<bits/stdc++.h>
using namespace std;
void nhap(int a[][100],int &n,int &k)
{
	multiset<int>s;
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	{
	cin>>a[i][j];
	s.insert(a[i][j]);
	}
	set<int>::iterator it=s.begin();
	advance(it,k-1);
	cout<<*it<<endl;
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[100][100];
		nhap(a,n,k);	
	}
}
