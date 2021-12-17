#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
	int t,i;
	string a;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		bool check =true;
		cin>>a;
		int n=a.length();
		for(i=0;i<n/2;i++)
		if(a[i]!=a[n-1-i]||a[i]%2!=0) {
			check=false;
			cout<<"NO";
			break;
		}
		if(check) cout<<"YES";
		cout<<endl;
	}
}

