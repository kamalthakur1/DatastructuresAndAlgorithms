//comment: Create Array during Run Time
#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
	int var,*v;
	cin>>var;
	v = (int *)malloc(sizeof(int)*var);
	for(int i=0;i<var;i++){
		cin>>v[i];
	}
	for(int i=0;i<var;i++){
		cout<<v[i]<<endl;
	}
	return 0;
}

