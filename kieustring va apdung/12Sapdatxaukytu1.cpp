#include<bits/stdc++.h>
using namespace std;
//ky tu xuat hien nhieu nhat phai be hon(n+1)/2 thi moi thoa man
string Solution(string S) { 
    int n = S.size(),maxs=0;
    if (n==0) 
        return "0"; 
    int F[200]={0};
    for (int i=0; i<n; i++)
        {
		F[S[i]]++; 
		maxs=max(F[S[i]],maxs);  } 
    if (maxs > (n + 1) / 2)
        return "0"; 
    return "1";
}
int main() {
	int T;	cin>>T;
	while(T--)	{
	    string str; 
		cin>>str;
	    cout<<Solution(str)<<endl;
	}
}  
