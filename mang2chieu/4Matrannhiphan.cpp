#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,dem=0,count,i,j;
	cin>>n;
	int a[n][3];
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
			if(a[i][j]==0) count++;
		}
		if(count<=1) dem++;
	}
	cout<<dem;
}

