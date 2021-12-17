#include<iostream>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int N;
		long long K,a,b,count,x,i,check;
		cin>>N;
		cin>>K;
		count=(1+N)*N/2;
		if(N<K) check=count;
		else{
			count=(K-1)*K/2;
			a=N/K;
			b=N%K;
			count*=a;
			for(int i=1;i<=b;i++) count+=i;
			check=count;
		}
		if(check==K) cout<<"1";
		else cout<<0;
		cout<<endl;
	}
}
