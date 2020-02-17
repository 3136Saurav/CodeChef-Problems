#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    unordered_map<string, int> fa;
    unordered_map<string, int> tr;
    set<string> ss;
    while(n--){
    	string s;
    	int iskey;
    	cin>>s>>iskey;
    	if(iskey == 1)
    	    tr[s]++;
    	else
    	    fa[s]++;
    	ss.emplace(s);
    }
    int res = 0;
    for(auto itr : ss){
        res += max(fa[itr], tr[itr]);
    }
    cout<<res<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
	    solve();
	}

	return 0;
}
