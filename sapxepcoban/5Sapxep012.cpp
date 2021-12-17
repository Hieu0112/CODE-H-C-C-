#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,t;
	cin>>t;
	while(t--)
	{	
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		sort(a,a+n);
		for(int i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<endl;
	}
}

