#include<bits/stdc++.h>
using namespace std;
int count(int x,int Y[],int n,int arr[])
{
	if(x==0) return 0;
	if(x==1) return arr[0];
	int ans=upper_bound(Y,Y+n,x)-Y;// vi tri dau tien
	ans=n-ans;//cac so lon hon x
	ans+=arr[0]+arr[1];
	if (x == 2)
        ans -= (arr[3] + arr[4]);
    if (x == 3)
        ans += arr[2];
    return ans;
}
int cmp(int X[], int Y[], int n, int m)
{
    int arr[5] = { 0 };
    for (int i = 0; i < m; i++)    if (Y[i] < 5)  arr[Y[i]]++;
    sort(Y, Y + m);
    int result = 0; 
    for (int i = 0; i < n; i++)
        result += count(X[i], Y, m, arr);
    return result;
}
void nhap(int *a,int n)
{
	for(int i=0;i<n;i++) cin>>a[i];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,m;
    cin>>n>>m;
    int X[n],Y[m];
    nhap(X,n);
    nhap(Y,m);
    cout <<cmp(X, Y, n, m)<<endl;
	}
    return 0;
}
