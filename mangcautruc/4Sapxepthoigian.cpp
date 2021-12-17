#include<bits/stdc++.h>
using namespace std;
main()
{
	int n;
	cin>>n;
	int a[n],b[n],c[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		cin>>b[i];
		cin>>c[i];}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j]) {
			swap(a[i],a[j]);
			swap(b[i],b[j]);
			swap(c[i],c[j]);}
			if(a[i]==a[j]&&b[i]>b[j]) {
			swap(a[i],a[j]);
			swap(b[i],b[j]);
			swap(c[i],c[j]);	
			}
			if(a[i]==a[j]&&b[i]==b[j]&&c[i]>c[j]) {
			swap(a[i],a[j]);
			swap(b[i],b[j]);
			swap(c[i],c[j]);	
		}
		}	
	}
	for(int i=0;i<n;i++)
	cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<endl;
}

