#include<bits/stdc++.h>
using namespace std;
#define MAX 200
void nhap(int a[][MAX],int &n ,int &m)
{
	for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
	cin>>a[i][j];
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{ 
		int n,m,maxs=INT_MIN;
		int a[MAX][MAX];
		cin>>n>>m;
		nhap(a,n,m);
		for(int i=0;i<m;i++)
		{
			vector<int>arr(n,0);
			for(int j=i;j<m;j++)
			{
				int h=0;
				for(int k=0;k<n;k++){
					arr[k]+=a[k][j];
					h=max(arr[k],arr[k]+h);
					maxs=max(maxs,h);		
					}
			}
		}
		cout<<maxs<<endl;
	}
}
