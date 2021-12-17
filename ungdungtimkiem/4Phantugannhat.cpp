#include<bits/stdc++.h>
using namespace std;
int c,n,k;
int a[1000009];
void nhap()
{
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		cin>>k>>c;
}
bool cmp(int a,int b)
{
	return abs(a-c)<abs(b-c);
}
void solution(int a[],int n,int k)
{
	sort(a,a+n,cmp);
	int dem=0;
	for(int i=0;i<n;i++){
		if(a[i]!=c)
		{
			cout<<a[i]<<" ";
			dem++;
		}
		if(dem==k) break;
	}
	int m=dem-k;
	if(m>0)
	while(m--) {
	cout<<"0"<<" ";}
	cout<<endl;
}
main()
{
	nhap();
	solution(a,n,k);
}
