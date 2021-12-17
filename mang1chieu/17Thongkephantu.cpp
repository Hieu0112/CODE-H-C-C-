#include<bits/stdc++.h>
using namespace std;
main()
{	
int list[10001],i=0,x;
	while(cin>>x)
	{
		list[i++]=x;
	}
	for(int j=0;j<i;j++)
	{
		int dem=0;
		for(int h=0;h<i;h++)
		{
			if(list[j]==list[h]) dem++;
		}
		bool check=true;
		for(int k=0;k<j;k++)
		if(list[j]==list[k]) check=false;
		if(check) cout<<list[j]<<" "<<dem<<endl;
	}
}
