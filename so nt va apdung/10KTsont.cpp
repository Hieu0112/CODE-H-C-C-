#include<bits/stdc++.h>
using namespace std;
bool check(long n)
{
	if(n<2) return false;
	else{
		for(int i=2;i<=sqrt(n);i++)
		if(n%i==0)
		return false;
	}
	return true;
}
main()
{
	long n;
	cin>>n;
	if(check(n)) cout<<"YES";
	else cout<<"NO";
}
