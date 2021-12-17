#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	long p,b,i,count;
	cin>>t;
	while(t--)
	{
		count=0;
		cin>>b>>p;
		for(i=1;i<p;i++)
		{
			if((i*i)%p==1)//x^2 %p=1
			{
				long x=i+p*(b/p);
				if(x>b) x-=p;
				count+=((x-i)/p+1);
			}
	}
	cout<<count<<endl;
}
}
