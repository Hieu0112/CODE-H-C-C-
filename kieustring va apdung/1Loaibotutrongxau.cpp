#include<bits/stdc++.h>
using namespace std;
main()
{
	string a,b,x;
	getline(cin,a);
	cin>>b;
	stringstream ss(a);
	while(ss>>x){
		if(x!=b) cout<<x<<" ";
	}
}
