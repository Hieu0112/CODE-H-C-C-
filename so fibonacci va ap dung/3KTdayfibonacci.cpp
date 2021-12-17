#include<bits/stdc++.h>
main()
{
		long a[19];
		a[0]=0;
		a[1]=1;
		for(int i=2;i<19;i++)
		a[i]=a[i-1]+a[i-2];
		
	int t;
	std::cin>>t;
	while(t--)
	{
		int n;
		std::cin>>n;
		long arr[n];
		for(int i=0;i<n;i++)
		std::cin>>arr[i];
		for(int i=0;i<n;i++)
		for(int j=0;j<19;j++)
		{	
		if(arr[i]==a[j]) {
			std::cout<<arr[i]<<" ";
			break;
		}
		if(a[j]>arr[i]) break;
		}
	std::cout<<std::endl;	
	}
}
