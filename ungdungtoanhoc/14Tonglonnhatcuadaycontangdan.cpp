#include<bits/stdc++.h>
using namespace std;
bool check(int a[],int n,int m)
{
	for(int i=n;i<m;i++)
	if(a[i]>=a[i+1]) return false;
	return true;
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,sum=0,mas=0;
		cin>>n;
		int a[n];
		vector<int>s(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
			s[i]=a[i];
			sum+=a[i];
			mas=max(mas,a[i]);
		}
		if(check(a,0,n)) cout<<sum;
		else{
			int x=1;
			while(s.size()>1){
			for(int i=0;i<s.size()-x;i++)
			{s[i]+=a[i+x];
			if(check(a,i,i+x)) mas=max(mas,s[i]);
			x++;
			s.erase(s.end()-1,s.end());
		}
			}
		cout<<mas;
		}
		
	cout<<endl;
	}
}


