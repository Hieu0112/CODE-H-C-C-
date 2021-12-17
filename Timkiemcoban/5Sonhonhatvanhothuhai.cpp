#include<bits/stdc++.h>
main()
{
	int t,n;
	std::cin>>t;
	while(t--)
	{
		std::cin>>n;
		long a[n];
		for(int i=0;i<n;i++)
		std::cin>>a[i];
		std::sort(a,a+n);
	bool check=false;
	int k=0;
	for(int i=0;i<n;i++)
	{
		if(a[0]!=a[i]) {
		check=true;k=i ;break;}
	}
	if(check) std::cout<<a[0]<<" "<<a[k];
	else std::cout<<-1;
	std::cout<<std::endl;
	}
}
