/*
	1,-1   	1,0		1,1
	0,-1	DIEM	0,1
	-1,-1	-1,0	-1,1
	tai 1 diem xet 8 o xung quanh neu co 1 thi xet diem day
*/	
#include<bits/stdc++.h>
#define max 100
using namespace std;
int n,m,arr[max][max];
bool chuaxet[max][max];
int hang[]={1,0,-1,-1,-1,0,1,1};
int cot[]= {1,1,1,0,-1,-1,-1,0};
void nhap(void)
{
	cin>>n>>m;
	for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
	{
		cin>>arr[i][j];
		chuaxet[i][j]=true;
	}
}
bool test(int x,int y)//xet toa do
{
	if(x>=0&&x<n&y>=0&&y<m//xet tiep theo xem cham bien k
	&&arr[x][y]// o tiep theo co gt la 1
	&&chuaxet[x][y]//o tiep theo chua xet
	)
	return true;
	return false;
}
void DFS(int x,int y)//DFS toa do
{
	chuaxet[x][y]=false;//xac nhan da quay den
	for(int i=0;i<8;i++)
	if(test(x+hang[i],y+cot[i]))
	DFS(x+hang[i],y+cot[i]);//quay lui den khi khong quay dc nua
}
int solution(void)
{
	int count=0;
	for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
	{
		if(arr[i][j]&&chuaxet[i][j]){
		DFS(i,j);// 1 lan DFS la 1 lan tim 1 mien
		count++;}
	}
	return count;
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
	nhap();
	cout<<solution()<<endl;	
	}
}
