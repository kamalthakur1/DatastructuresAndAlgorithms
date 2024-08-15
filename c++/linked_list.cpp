#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	struct Node *Next;
};
int main(){
	int n;
	cin>>n;
	struct Node *temp;
	temp = (Node *)malloc(sizeof(struct Node));
	temp->data = 8;
	temp->Next = NULL;
	cout<<temp->data<<endl;
	cout<<temp->Next<<endl;
	for(int i=0; temp !=NULL && i<5;i++){
		temp = temp->Next;
	}
	cout<<temp<<endl;
	int *vec = new int[n]();
	vector<int> vectr(n);
	for(int i=0;i<n;i++){
		cout<<vec[i]<<endl;
	}
	for(int i=0;i<n;i++){
		cout<<vectr[i]<<endl;
	}
	return 0;
}

/*
next = cur->next;
cur->next = prev;
prev = cur;
cur = next;
*/
