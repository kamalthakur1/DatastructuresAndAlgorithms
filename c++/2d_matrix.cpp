#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
	int row,col,**mat;
	cin>>row>>col;
	mat = (int **)malloc(sizeof(int)*row);
	for(int i=0;i<row;i++){
		mat[i] = (int *)malloc(sizeof(int)*col);
	}
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>mat[i][j];
		}

	}
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
