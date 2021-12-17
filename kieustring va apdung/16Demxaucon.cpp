#include <bits/stdc++.h>  
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k;
		string s;
		cin>>s;
		cin>>k;
		int count=0;
		for(int i=0;i<s.length();i++)
		{
			int dem=0;
			int arr[200]={0};
			for(int j=i;j<s.length();j++)
			{
				arr[s[j]]++;
				if(arr[s[j]]==1) dem++;//dem so ky tu khac nhau
				if(dem==k) count++;// so ky tu bang k thoa man 1 xau
				if(dem>k) break;// so ky tu lon hon huy for 2
			}
		}
		cout<<count<<endl;
	}
}
