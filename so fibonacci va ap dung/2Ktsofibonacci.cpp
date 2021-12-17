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
		long long n;
		bool check=false;
		std::cin>>n;
		for(int i=0;i<92;i++)
		{
		if(a[i]==n) {
			std::cout<<"YES";
			check=true;
			break;
		}
		if(a[i]>n) break;}
		if(!check) std::cout<<"NO";
		std::cout<<std::endl;
	}	
}
