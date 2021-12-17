#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long n,x=-2,k;
		cin>>n>>k;
		int *a=new int[n];
		for(long i=0;i<n;i++) {
			cin>>a[i];
			if(a[i]==k&&x==-2){
				x=i;
			}
		}
		cout<<x+1<<endl;
	}
}
