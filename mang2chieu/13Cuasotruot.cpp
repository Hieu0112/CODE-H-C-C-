#include<iostream>
using namespace std;
#define max 100
void nhap(int a[max][max],int &n)
{
	cin>>n;
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	cin>>a[i][j];
}
void solution(int a[max][max],int b[max][max],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			int h=i%m,k=j%m;
			cout<<a[i][j]*b[h][k]<<" ";
		}
		cout<<endl;
	}
}
main()
{
	int n,a[max][max],b[max][max],m;
		nhap(a,n);
		nhap(b,m);
		solution(a,b,n,m);
}

