#include <iostream>
using namespace std;
vector<int> v;
int isprime[10010];
int dp[10010];
void sieve() {
for(int i=2;i<=100;i++) {
	for(int j=i*2;j<=10000;j+=i) {
		if(isprime[j]==0)
			isprime[j]=1;
	}
}
isprime[4]=0;
isprime[27]=0;
isprime[3125]=0;
for
int main() {

