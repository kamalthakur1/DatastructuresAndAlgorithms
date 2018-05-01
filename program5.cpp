//Work in Progress
#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
	int r_size,c_size, **mat;
	cout<<"Enter Matric size: ";
	cin>>r_size>>c_size;
	**mat = (int *)malloc(sizeof(int)*r_size*c_size);


	return 0;
}
