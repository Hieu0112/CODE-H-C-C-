#include<iostream>
using namespace std;
main()
{
	int a,m,t;
	cin>>t;
	while(t--)
	{
		cin>>a>>m;
		bool check =false;
		for(int i=1;i<m;i++)
		{
			if((i*a)%m==1)
			{
				cout<<i<<endl;
				check=true;
				break;
			}
		}
		if(!check) cout<<-1<<endl;
	}
}
