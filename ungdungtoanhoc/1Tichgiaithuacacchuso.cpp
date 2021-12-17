#include<bits/stdc++.h>
using namespace std;
main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string chuoi,max;
		cin>>chuoi;
		for(int i=0;i<n;i++)
		{
		char h=chuoi[i];
		if(h=='2'||h=='3'||h=='5'||h=='7')	max+=h;
		if(h=='4') max+="322";
		if(h=='6') max+="53";
		if(h=='8') max+="7222";
		if(h=='9') max+="7332";
		}
		char x='9';
		while(true)
		{
		for(int i=0;i<max.length();i++)
		{
			if(max[i]==x) cout<<x;
		}
		x--;
		if(x=='1') break;
		}
	cout<<endl;
	}
}

