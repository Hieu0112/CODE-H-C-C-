#include<bits/stdc++.h>
using namespace std;
int somayman(long long a)
{
	if(a<9) return 0;
	else{
		long long s=0;
		while(a!=0)
		{
			int m=a%10;
			s+=m;
			a/=10;
		}
		if(s%9==0)return 1;
		else return 0;
	}
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a;
		cin>>a;
		long long n=a.length(),i,s=0;
		for(i=0;i<n;i++)
		{
			s+=(a[i]-'0');
		}
		// so chia het cho 9
		cout<<somayman(s)<<endl;
	}
}

