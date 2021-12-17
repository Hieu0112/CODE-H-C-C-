#include<bits/stdc++.h>
using namespace std;
int k=1;
class SinhVien{
	public:
		int stt;
		string name,Class;
		int date,month,year;
		double GPA;
		char x;
	friend istream &operator>>(istream &is,SinhVien &a)
	{ is.ignore();
	a.stt=k++;
	getline(is,a.name);
	getline(is,a.Class);
	is>>a.date>>a.x>>a.month>>a.x>>a.year;
	is>>a.GPA;
	return is;
	}
	friend ostream &operator<<(ostream &os,SinhVien a)
	{
	os<<"B20DCCN0";
	if(a.stt<10) os<<"0";
	os<<a.stt<<" ";	
	os<<a.name<<" "<<a.Class<<" ";
	if(a.date<10) os<<"0";
	os<<a.date<<"/";
	if(a.month<10) os<<"0";
	os<<a.month<<"/"<<a.year<<" ";
	os<<fixed<<setprecision(2)<<a.GPA<<endl;
	return os;
	}	
};
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
