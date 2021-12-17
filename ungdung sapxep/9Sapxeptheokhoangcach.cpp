#include<bits/stdc++.h>
using namespace std;
int x,n,i;
bool sapxep(int m,int n)
{
	return abs(m-x)<abs(n-x);
	}
void in()
{
		cin>>n>>x;
		int art[n+1];
		for(i=0;i<n;i++) cin>>art[i];
		stable_sort(art,art+n,sapxep);
		for(i=0;i<n;i++)
		cout<<art[i]<<" ";
		cout<<endl;	
}
main()
{
	int t,x,n;
	cin>>t;
	while(t--)	in();
}

