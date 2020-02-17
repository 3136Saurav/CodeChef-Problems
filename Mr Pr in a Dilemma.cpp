#include<iostream>
#include<cstdlib>
using namespace std;
# define ll long long int

int main(){
	int t;
	cin>>t;
	ll a, b, c, d;
	bool flag = false;
	while(t--){
		cin>>a>>b>>c>>d;
		if(c!=d){
			if(abs(a-b)%abs(c-d)==0)
				cout<<"YES"<<endl;
			
			else
				cout<<"NO"<<endl;
			
		}
		else{
			if(a == b)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
		
	}
	return 0;
}
