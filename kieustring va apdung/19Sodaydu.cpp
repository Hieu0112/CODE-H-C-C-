#include<bits/stdc++.h>
using namespace std;
main()
{
	int t,i,vitri,thu;
	string a;
	cin>>t;
	while(t--)
	{
	cin>>a;
	bool check =true;
	for(int m=0;m<a.length();m++)
	{
		if(a[m]>'9'||a[0]=='0') {
			check =false;
			break;
		}
	}
	if(!check) cout<<"INVALID";
	else{
	check= true;
	i=0;
	while(true)
	{
	vitri=a.find(i+'0');
	if(vitri==-1){
		check=false;
		 break;
	}
	if(vitri>=0){
		i++;
	}
	if(i==10) break; 	
	}
	if(check) cout<<"YES";
	else cout<<"NO";}
	cout<<endl;
	}
}

