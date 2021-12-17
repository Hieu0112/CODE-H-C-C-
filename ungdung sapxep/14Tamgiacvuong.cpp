#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long a[n],art[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			art[i]=a[i]*a[i];
		}
		sort(art,art+n);
		int x=0,y=n-2,z=n-1;
		bool check=false;
		while(y>0)
		{
			if(art[x]+art[y]>art[z]) y--;
			else if(art[x]+art[y]<art[z]) x++;
			else{
				check=true;
				break;
			}
			if(x==y) {
				x=0,z--;
				y=z-1;
			}
		}
		if(!check) cout<<"NO";
		else cout<<"YES";
		cout<<endl;
	}
}
