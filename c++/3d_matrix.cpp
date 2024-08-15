//Work in Progress
#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
	int r_size,c_size,d_size, ***mat;
	cout<<"Enter Matric size: ";
	cin>>r_size>>c_size>>d_size;
	cout<<r_size<<" "<<c_size<<" "<<d_size<<endl;
	mat = (int ***)malloc(sizeof(int)*r_size);
	for(int i=0;i<r_size;i++){
		mat[i]=(int **)malloc(sizeof(int)*c_size);
		for(int j=0;j<c_size;j++){
			mat[i][j]=(int *)malloc(sizeof(int)*d_size);
		}
	}
	for(int i=0;i<r_size;i++){
		for(int j=0;j<c_size;j++){
			for(int k=0;k<d_size;k++){
			        cin>>mat[i][j][k];
			}
		}
	}
	for(int i=0;i<r_size;i++){
		for(int j=0;j<c_size;j++){
			for(int k=0;k<d_size;k++){
			        cout<<mat[i][j][k]<<"  ";
			}
			cout<<"\t";
		}
		cout<<endl;
	}



	return 0;
}
