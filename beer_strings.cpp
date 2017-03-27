#include <bits/stdc++.h>
using namespace std;
int h[26];
int main() {
	string str;
	int n;
	cin>>str;
	memset(h,0,sizeof(h));
	for(int i=0;str[i]!='\0';i++) 
		h[str[i]-'a']++;
	scanf("%d",&n);
	int count=0; string s;
	int h1[26];
	while(n--) {
		memset(h1,0,sizeof(h1));
		cin>>s;
		for(int i=0;s[i];i++)
			h1[s[i]-'a']++;
		bool flag=true;
		for(int i=0;s[i];i++) {
			if(h[s[i]-'a']<h1[s[i]-'a']){
				flag=false;
				break;
			}
		}
		if(flag)
			count++;
	}
	printf("%d",count);
}


