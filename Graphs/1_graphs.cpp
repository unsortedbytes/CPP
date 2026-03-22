#include<bits/stdc++.h>
using namespace std;

void print_graph(vector<vector<int>> adjacencyMatrix){
    for(int i=1;i<=4;i++){
        cout<<"Node: "<<i<<", Neighbors: ";
        for(int j =1;j<=4;j++){
            if(adjacencyMatrix[i][j]==1){
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    // Adjacency Matrix
    // N-> no of node M-> no of edge
    // M lines give the which node is connected;

    vector<vector<int>>edgeList = {
        {1,2}, {2, 3}, {3, 4}, {4, 2}, {1, 3}
    };

    int n = 5;
    vector<vector<int>> adjacencyMatrix(5, vector<int>(5,0));
    for(int i=0;i<edgeList.size();i++){
        int a = edgeList[i][0], b = edgeList[i][1];
        adjacencyMatrix[a][b] =1;
        adjacencyMatrix[b][a] =1;
    }

    print_graph(adjacencyMatrix);

}