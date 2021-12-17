#include<bits/stdc++.h>
using namespace std;
main()
{
	bool a[1000009];
	a[0]=false;
	a[1]=false;
	for(int i=2;i<=100009;i++)
	a[i]=true;
	for(int i=2;i<=100009;i++)
	for(int j=2*i;j<=100009;j+=i)
	if(a[i])
 	a[j]=false;

		int x,y;
		cin>>x>>y;
		if(x>y) swap(x,y);
		for(int i=x;i<=y;i++)
		{
			if(a[i]) cout<<i<<" ";
		}
}
