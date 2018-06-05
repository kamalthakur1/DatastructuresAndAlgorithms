//fibonacci using tabulation
#include<iostream>
using namespace std;
int fibo(int n){
	int *ar;
	ar = new int[n];
	ar[0] = 0;
	ar[1] = 1;
	for(int i=2;i<n;i++){
		ar[i] = ar[i-1] + ar[i-2];
	}
	return ar[n-1];
}
int main(){
	int n,res;
	cin>>n;
	res = fibo(n);
	cout<<res;
	return 0;
}
