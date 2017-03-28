#include <bits/stdc++.h>
using namespace std;
int cnt[26];
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
	string a,b;
	memset(cnt,0,sizeof(cnt));
	cin>>a>>b;
	string res=a+b;
	for(int i=0;i<res.length();i++) 
		cnt[res[i]-'a']++;
	string c,temp;
	int n;
	scanf("%d",&n);
	bool f=true;
	while(n--) {
		cin>>c;
		temp+=c;
	}
	for(int i=0;i<temp.length();i++) {
			cnt[temp[i]-'a']--;
			if(cnt[temp[i]-'a']<0) {
				f=false;
				break;
			}
	}
	if(!f)
		printf("NO\n");
	else
		printf("YES\n");
	}
	return 0;
}
