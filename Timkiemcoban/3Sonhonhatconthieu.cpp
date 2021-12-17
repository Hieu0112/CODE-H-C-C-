#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	short t;
	cin>>t;
	while(t--)
	{
		long n;
		bool check=true;
		cin>>n;
		long a[n];
		a[0]=0;
		for(long i=1;i<n;i++) cin>>a[i];
		sort(a,a+n-1);
		for(int i=0;i<n-1;i++)
		if(a[i]+1<a[i+1]) {
			check=false;
			cout<<a[i]+1;
			break;
		}
		if(check) cout<<a[n-1]+1;
		cout<<endl;
	}
}
