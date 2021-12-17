#include<bits/stdc++.h>
using namespace std;
#define max 100
void nhap(int a[max][max],int n)
{
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	cin>>a[i][j];
}
main()
{
	short n,m,t;
	int a[max][max];
		cin>>n;
		m=n;
		t=n;
		multiset<int>s;
		nhap(a,n);
		for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		s.insert(a[i][j]);
		multiset<int>::iterator it=s.begin();
		int hang=0,cot=0;
		while(hang<n&&cot<m)
		{
//			if(hang+1==n&&cot+1==m) break;
			for(int i=cot;i<m;i++){
			a[hang][i]=*it;
			it++;}
			hang++;
			for(int i=hang;i<n;i++){
			a[i][m-1]=*it;it++;}
			m--;
			if(hang<n)
			for(int i=m-1;i>=cot;i--){
			a[n-1][i]=*it;
			it++;}
			n--;
			if(cot<m)
			for(int i=n-1;i>=hang;i--){
			a[i][cot]=*it;it++;
		}
			cot++;
		}
		for(int i=0;i<t;i++){
		for(int j=0;j<t;j++)
		cout<<a[i][j]<<" ";
		cout<<endl;}
}

