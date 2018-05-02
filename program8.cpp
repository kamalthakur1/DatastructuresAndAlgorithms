#include<bits/stdc++.h>
using namespace std;
bool **graph;
void add_edge(int node1,int node2){
	graph[node1][node2]=true;
	graph[node2][node1]=true;
}

bool bfs(int src,int dest,int num_house,int *dist,int *pred){
	
	list<int> queue;
	int temp;
	bool *visited;
	visited = (bool *)malloc(sizeof(bool)*num_house);
	for(int i=0;i<num_house;i++){
		dist[i] = INT_MAX;
		pred[i] = -1;
		visited[i] = false;
	}
	visited[src] = true;
	queue.push_back(src);
	dist[src] = 0;
	while(!queue.empty()){
		temp = queue.front();
		//visited[temp] = true;
		queue.pop_front();
		for(int i=0;i<num_house;i++){
			if(graph[temp][i]&&!visited[i]){
				queue.push_back(i);
				pred[i] =  temp;
				visited[i] = true;
				dist[i] = dist[temp] + 1;
				
				if(i == dest){
					return true;
				}
			}
		}
	
	}
	return false;
}

list<int> shortest_path(int src,int dest,int num_house){
	int *dist,*pred;
	list<int> short_path;
	dist = (int *)malloc(sizeof(int)*num_house);
	pred = (int *)malloc(sizeof(int)*num_house);
	
	if(bfs(src,dest,num_house,dist,pred)==true){
		int i = dest;
		short_path.push_back(i);
		while(pred[i]!=-1){
			short_path.push_back(pred[i]);
			i = pred[i];
		}
		//cout<<short_path.size()<<endl;
		return short_path;
	}
}

int main(){
	int num_house,num_visit,temp1,temp2,temp3,*num_gift,max_gift=0;
	list<int> gift_hide;
	cin>>num_house>>num_visit;
	
	graph = (bool **)malloc(sizeof(int)*num_house);
	num_gift = (int *)malloc(sizeof(int)*num_house);
	for(int i=0;i<num_house;i++){
		graph[i] = (bool *)malloc(sizeof(bool)*num_house);
		//num_gift[i] = 0;
	}
	
	
	/*for(int i=0;i<num_house;i++){
	    num_gift[i]=0;
	}*/

	for(int i=0;i<num_house-1;i++){
		cin>>temp1>>temp2;
		add_edge(temp1-1,temp2-1);
	}
/*	for(int i=0;i<num_house;i++){
		for(int j=0;j<num_house;j++){
			cout<<graph[i][j]<<" ";
		}
		cout<<endl;
	}
	*/
	for(int i=0;i<num_visit;i++){
		cin>>temp1>>temp2;
		gift_hide = shortest_path(temp1-1,temp2-1,num_house);
		int n = gift_hide.size();
		while(!gift_hide.empty()){
			temp3 = gift_hide.front();
			//cout<<temp3<<" ";
			gift_hide.pop_front();
			num_gift[temp3]++;
		}
		//cout<<endl;
	}
	for(int i=0;i<num_house;i++){
		if(num_gift[i]>max_gift){
			max_gift = num_gift[i];
		}
	}
	cout<<max_gift<<endl;	
	return 0;
}
