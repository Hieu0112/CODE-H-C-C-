#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	public:
		string ma,ten,lop,mail;
		friend istream &operator>>(istream &is,SinhVien &a)
		{
			scanf("\n");
			getline(is,a.ma);
			getline(is,a.ten);
			getline(is,a.lop);
			getline(is,a.mail);
			return is;
		}
		friend void sapxep(SinhVien a[],int n)
		{
			for(int i=0;i<n-1;i++){
				for(int j=i+1;j<n;j++){
				if(a[i].lop>a[j].lop) swap(a[i],a[j]);
				if(a[i].lop==a[j].lop&&a[i].ma>a[j].ma) swap(a[i],a[j]);
				}
			}	
		}
		friend ostream &operator<<(ostream &os,SinhVien &a)
		{
			os<<a.ma<<" "<<a.ten<<" "<<a.lop<<" "<<a.mail<<endl;
			return os;
		}
};
int main(){
    SinhVien ds[1009];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
