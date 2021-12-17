#include<bits/stdc++.h>
using namespace std;

class NhanVien{
public:
string ten,gt,date,address,so,date2;
	void nhap()
	{
    getline(cin,ten);
    cin>>gt;
    cin>>date;
    cin.ignore();
    getline(cin,address);
    cin>>so>>date2;
    
	}
	void xuat()
	{
    cout<<"00001 "<<ten<<" "<<gt<<" "<<date<<" "<<address<<" "<<so<<" "<<date2;
	}
};
int main(){
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}
