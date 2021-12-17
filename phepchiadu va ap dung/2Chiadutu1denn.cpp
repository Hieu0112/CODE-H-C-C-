#include<iostream>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int N;
		long long K,a,b,count,x,i;
		cin>>N;
		cin>>K;
		count=(1+N)*N/2;
		if(N<K) cout<<count;
		else{
			count=(K-1)*K/2;
			a=N/K;
			b=N%K;
			count*=a;
			for(i=1;i<=b;i++)
			count+=i;
			cout<<count;
		}
		cout<<endl;
	}
}
