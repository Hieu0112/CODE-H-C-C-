#include<bits/stdc++.h>
using namespace std;
/*
sum_n=sum1+sum2;
sum1-sum2=b;
sum1=(sum_n+b)/2;
sum2=sum_n-sum1;
*/

void check(long long a,long long b)
{
	long long sum_a=a*(a+1)/2;
	long long sum1=(sum_a+b)/2;
	long long sum2=sum_a-sum1;
	if(sum_a<b) cout<<"No";
	else{
		if(sum1-sum2==b){
			if(__gcd(sum1,sum2)==1) cout<<"Yes";
			else cout<<"No";
		}
		else cout<<"No";
	}
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,m;
		cin>>n>>m;
		check(n,m);
		cout<<endl;
	}
}
