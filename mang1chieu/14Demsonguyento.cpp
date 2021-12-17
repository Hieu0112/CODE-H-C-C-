#include<iostream>
using namespace std;
long maxs=100009;
int main()
{
	bool art[maxs];
	long i,j,a,b;
	for(i=2;i<maxs;i++) art[i]=true;
	for(i=2;i<maxs;i++)
	{
		if(art[i])
		{
			for(j=2*i;j<maxs;j+=i)
			art[j]=false;
		}
	}
	int t,count;
	cin>>t;
	while(t--)
	{
	count=0;
	cin>>a>>b;
	for(i=a;i<=b;i++)
	if(art[i]) count++;
	cout<<count<<endl;
	}
}

