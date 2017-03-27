#include <iostream>
using namespace std;
int a[10000];
int max(int a,int b) {
	return (a>=b?a:b); 
}
int main() {
	int n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++) 
		cin>>a[i];
	if(k>n)
		cout<<"-1"<<endl;
	int max_sum=-1,sum=0,last=0;
	for(int i=0;i<k;i++) 
		sum+=a[i];
	for(int i=k;i<n;i++) {
		sum=sum-a[last];
		sum+=a[i];
		max_sum=max(max_sum,sum);
		last++;
	}
	cout<<max_sum<<endl;
	return 0;
}
