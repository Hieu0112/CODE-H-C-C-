#include<bits/stdc++.h>
using namespace std;
int k=1;
class NhanVien{
	public:
		int ma_nv;
		string name,gt,date1,address,maso,date2;
		friend istream &operator>>(istream &is,NhanVien &a)
		{
			a.ma_nv=k;
			k++;
			scanf("\n");
			getline(is,a.name);
			getline(is,a.gt);
			getline(is,a.date1);
			getline(is,a.address);
			getline(is,a.maso);
			getline(is,a.date2);
			return is;
		}
		friend ostream &operator<<(ostream &os,NhanVien &a)
		{
			os<<"000";
			if(a.ma_nv<10) os<<"0";
			os<<a.ma_nv<<" ";
			os<<a.name<<" "<<a.gt<<" "<<a.date1<<" ";
			os<<a.address<<" "<<a.maso<<" "<<a.date2<<endl;
			return os;
		}
};
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
