//fibonacci using memoization
#include<iostream>
using namespace std;
int fibo(int n,int *ar){
	if(n == 0 || n == 1){
		return ar[n];
	}
	if(ar[n]==-1){
                ar[n] = fibo(n-1,ar) + fibo(n-2,ar);
        }
        return ar[n];
}


int main(){
	int n,res;
        cin>>n;
	int *ar = new int[n];
	for(int i=0;i<n;i++){
		ar[i] = -1;
	}
        ar[0] = 0;
        ar[1] = 1;
	res = fibo(n-1,ar);
	cout<<res<<endl;
	return 0;
}
