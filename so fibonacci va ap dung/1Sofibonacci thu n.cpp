#include<bits/stdc++.h>
main()
{
		long long a[92];
		a[0]=0;
		a[1]=1;
		for(int i=2;i<=92;i++)
		a[i]=a[i-1]+a[i-2];
		
	int t;
	std::cin>>t;
	while(t--)
	{
		int n;
		std::cin>>n;
		std::cout<<a[n]<<std::endl;
	}	
}

