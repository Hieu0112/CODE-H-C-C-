#include<bits/stdc++.h>
using namespace std;
#define max 100
void nhap(int a[max][max],int n,int m)
{
	for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
	cin>>a[i][j];
}
main()
{
	short t,n,m;
	int a[max][max];
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		nhap(a,n,m);
		int hang=0,cot=0;
		while(hang<n&&cot<m)
		{
		//	if(hang+1==n&&cot+1==m) break;
			for(int i=cot;i<m;i++)
			cout<<a[hang][i]<<" ";
			hang++;
			for(int i=hang;i<n;i++)
			cout<<a[i][m-1]<<" ";
			m--;
			if(hang<n)
			for(int i=m-1;i>=cot;i--)
			cout<<a[n-1][i]<<" ";
			n--;
			if(cot<m)
			for(int i=n-1;i>=hang;i--)
			cout<<a[i][cot]<<" ";
			cot++;
		}
		cout<<endl;
	}
}
