#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,count=0;
		cin>>n;
		vector<int>a(n);
		for(int i=0;i<n;i++)
		cin>>a[i];
		bool check=false;
		while(check==false)
		{
			if(a[0]==a[a.size()-1]){
				a.erase(a.begin(),a.begin()+1);
				a.erase(a.end()-1,a.end());
			}
			else if(a[0]>a[a.size()-1])
			{
				a[a.size()-2]+=a[a.size()-1];
				count++;
				a.erase(a.end()-1,a.end());
			}
			else {
				a[1]+=a[0];
				count++;
				a.erase(a.begin(),a.begin()+1);
			}
			if(a.size()<=1) check=true;
		}
		cout<<count<<endl;	
	}
}
