#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int k=1;
		stack<int>a;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='D')
			{
				if(s[i-1]=='I'||i==0)
				a.push(k++);
				a.push(k++);
			}
			else{
				while(a.size()>0)
				{
					cout<<a.top();
					a.pop();
				}
				if(i==0) cout<<k++;
				if(s[i+1]!='D') cout<<k++;
			}
		}
		while(a.size()>0)
		{
			cout<<a.top();
			a.pop();
		}
		cout<<endl;
	}
}
