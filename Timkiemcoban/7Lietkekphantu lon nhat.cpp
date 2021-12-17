#include<iostream>
#include<algorithm>
bool cmp(long a,long b)
{
	return a>b;
}
main()
{
	int t,n,i,j;
	long k;
	std::cin>>t;
	while(t--)
	{
		int h=0;
		std::cin>>n;
		std::cin>>k;
		long a[n+1];
		for(i=0;i<n;i++)
		std::cin>>a[i];
		std::sort(a,a+n,cmp);
		for(i=0;i<k;i++)
		{
			std::cout<<a[i]<<" ";
		}
		std::cout<<"\n";
	}
}

