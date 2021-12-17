#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string msv,ten,malop;
	double A,B,C;
};
void nhap(SinhVien &a)
{
	cin.ignore();
	getline(cin,a.msv);
	getline(cin,a.ten);
	getline(cin,a.malop);
	cin>>a.A>>a.B>>a.C;
}
bool cmp(SinhVien a,SinhVien b)
{
	return a.msv<b.msv;
}
void sap_xep(SinhVien *ds,int n)
{
	sort(ds,ds+n,cmp);
}
void in_ds(SinhVien *ds,int n)
{
	for(int i=0;i<n;i++)
	{cout<<i+1<<" "<<ds[i].msv<<" "<<ds[i].ten<<" "<<ds[i].malop<<" ";
	printf("%.1lf %.1lf %.1lf\n",ds[i].A,ds[i].B,ds[i].C);}
}
int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}

