#include <iostream>
#define ll long long int
using namespace std;
const int MOD=1e9+7;
int main() {
int t;
cin>>t;
while(t--) {
	string str;
	cin>>str;
	ll dp[3]={0};
	for(int i=0;i<str.length();i++) {
		if(str[i]=='a')
			dp[0]=(2*dp[0]+1)%MOD;
		else if(str[i]=='b')
			dp[1]=(dp[0]+2*dp[1])%MOD;
		else
			dp[2]=(dp[1]+2*dp[2])%MOD;
	}
	cout<<dp[2]<<endl;
}
return 0;
}
