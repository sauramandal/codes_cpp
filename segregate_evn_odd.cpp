#include <iostream>
#include <vector>
using namespace std;
void swap(int *x,int *y) {
	*x=*x^*y;
	*y=*x^*y;
	*x=*x^*y;
}
int main() {
	int n,data;
	cin>>n;
	vector<int> a;
	for(int i=0;i<n;i++) {
		cin>>data;
		a.push_back(data);
	}
	int i=0,j=n-1;
	while(i<j) {
		while(i<j && a[i]%2==0)
			i++;
		while(i<j && a[j]%2==1)
			j--;
		if(i<j) {
		swap(&a[i],&a[j]);
		i++;
		j--;
		}
	}
	for(int i=0;i<n;i++)
		cout<<a[i]<<' ';
	return 0;
}	

