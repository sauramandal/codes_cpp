#include <iostream>
using namespace std;
int main() {
	int balls,n,candies_added=0;
	cin>>balls>>n;
	int b[n];
	for(int i=0;i<n;i++)
		cin>>b[i];
	int old=balls;
	for(int i=0;i<n;i++){
			balls=balls-b[i];
			if(balls<5 && i!=(n-1)){
				candies_added+=(old-balls);
				balls=old;
			}
	}
	cout<<candies_added<<endl;
	return 0;
}

