#include<iostream>
main()
{
	int t,n,k;
	std::cin>>t;
	while(t--)
	{
		std::cin>>n>>k;
		long a[n],i,dem=0;
		for(i=0;i<n;i++)
		{
			std::cin>>a[i];
			if(a[i]==k) dem++;
		}
		if(dem>=1) std::cout<<dem;
		else std::cout<<-1;
		std::cout<<std::endl;
	}
}

