#include<bits/stdc++.h>
using namespace std;
int k=1;
class NhanVien{
	public:
		int ma_nv,ngay,thang,nam;
		char x;	
		string name,gt,address,maso,date2;
		friend istream &operator>>(istream &is,NhanVien &a)
		{
			scanf("\n");
			a.ma_nv=k;
			k++;
			getline(is,a.name);
			getline(is,a.gt);
			is>>a.thang>>a.x>>a.ngay>>a.x>>a.nam;
			is.ignore();
			getline(is,a.address);
			getline(is,a.maso);
			getline(is,a.date2);
			return is;
		}
		friend void sapxep(NhanVien a[],int n)
		{
			for(int i=0;i<n-1;i++){
				for(int j=i+1;j<n;j++){
				if(a[i].nam>a[j].nam) swap(a[i],a[j]);
				if(a[i].nam==a[j].nam&&a[i].thang>a[j].thang) swap(a[i],a[j]);
				if(a[i].nam==a[j].nam&&a[i].thang==a[j].thang&&a[i].ngay>a[j].ngay) swap(a[i],a[j]);
				}
			}	
		}
		friend ostream &operator<<(ostream &os,NhanVien &a)
		{
			os<<"000";
			if(a.ma_nv<10) os<<"0";
			os<<a.ma_nv<<" ";
			os<<a.name<<" "<<a.gt<<" ";
			if(a.thang<10) os<<"0";
			os<<a.thang<<"/";
			if(a.ngay<10) os<<"0";
			os<<a.ngay<<"/"<<a.nam<<" ";
			os<<a.address<<" "<<a.maso<<" "<<a.date2<<endl;
			return os;
		}
};
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
