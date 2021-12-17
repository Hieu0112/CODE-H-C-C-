#include<bits/stdc++.h>
using namespace std;
main()
{
	short t,n,m,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>m>>k;
		int a[n][m];
		vector<int>s;
		s.clear();
		for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		cin>>a[i][j];
		int hang=0,cot=0;
		while(hang<n&&cot<m)
		{
			for(int i=cot;i<m;i++)
			s.push_back(a[hang][i]);
			hang++;
			for(int i=hang;i<n;i++)
			s.push_back(a[i][m-1]);
			m--;
			if(hang<n)
			for(int i=m-1;i>=cot;i--)
			s.push_back(a[n-1][i]);
			n--;
			if(cot<m)
			for(int i=n-1;i>=hang;i--)
			s.push_back(a[i][cot]);
			cot++;
		}
	vector<int>::iterator it=s.begin();
	advance(it,k-1);
	cout<<*it<<endl;
	}
}
