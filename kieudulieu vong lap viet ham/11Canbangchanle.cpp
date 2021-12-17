#include<bits/stdc++.h>
using namespace std;
bool xuly(long x)
{
	int dem=0,count=0;
	while(x!=0)
	{
		int a=x%10;
		if(a%2==0) dem++;
		count++;
		x/=10;
	}
	return (dem==count-dem);
}
main()
{
	int n;
	cin>>n;
	int x=0;
	long b=pow(10,n);
	long a=b/10; 
	for(long i=a;i<=b;i++)
	{
	if(xuly(i)==1) {
	cout<<i<<" ";
	x++;}
	if(x%10==0) cout<<endl;
	} 
}
