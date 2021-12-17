#include<bits/stdc++.h>
using namespace std;
main()
{
	int N,K,B;
	cin>>N>>K>>B;
	int a[B];
	int x,sum=0;
	int art[N+2];
	for(int i=1;i<N+2;i++) art[i]=1;
	for(int i=0;i<B;i++) {
		cin>>x;
		art[x]=0;//danh dau vi tri
	}
	for(int i=1;i<=K;i++)
	{
		sum+=art[i];//tong 
	}
	int count=K-sum;
	for(int i=K+1;i<=N;i++)
	{
		sum+=art[i];
		sum-=art[i-K];
		count=min(K-sum,count);
	}
	if(count<0) cout<<"0";
	else cout<<count;
	cout<<endl;
}
