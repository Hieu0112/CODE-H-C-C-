#include<bits/stdc++.h>
using namespace std;
int main()
{
	short t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n][n],dem=0;
		int s[100009]={0};
		for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
		{bool check=false;
			cin>>a[i][j];
			for(int h=0;h<j;h++)
			{
				if(a[i][h]==a[i][j]) {check=true;
				break;
				}
			}
			if(check==false) s[a[i][j]]++;
		}
		}
		set<int>arr;
		for(int i=0;i<n;i++)
		arr.insert(a[n-1][i]);
		for(set<int>::iterator i=arr.begin();i!=arr.end();i++)
		if(s[*i]==n) dem++;
		cout<<dem<<endl;
	}
}

