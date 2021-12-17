#include<bits/stdc++.h>
using namespace std;
void check(string a)
{
	int n=a.length(),z=0,t=0;
	for(int i=n-1;i>0;i--)
	if(a[i]<a[i-1])
		{
		for(int j=i;j<n;j++)
		{
			if(a[i-1]>a[j]&&a[j]>z) {// trong j,n tim so max ma be hon a[j] de the cho
				z=a[j],t=j;
			}
		}
		if(t!=0) {
			swap(a[i-1],a[t]);break;}
		}
	if(t==0) cout<<"-1";
	else{
	if(a[0]=='0') cout<<"-1";	
	else cout<<a;
	}
}
main()
{
	string a;
	int t;
	cin>>t;
	while(t--)
	{
		cin>>a;
		check(a);
		cout<<endl;
	}
}

