#include<iostream>
using namespace std;
struct Edge
{
    int source, dest, weight;
};
int findParent(int parent[], int node){
    if (parent[node]==node)
    {
        return node;
    }
    return findParent(parent,parent[node]);
}
void unionSets(int parent[], int setX, int setY){
    parent[setX] = setY;
}
void KruskalMST(Edge edges[], int V, int E){
    for (int i = 0; i < E-1; i++)
    {
        for (int j = i+1; j < E; j++)
        {
            if (edges[i].weight>edges[j].weight)
            {
                swap(edges[i],edges[j]);
            }
        }
    }
    int parent[V];
    for (int i = 0; i < V; i++)
    {
        parent[i] = i;
    }
    Edge mst[V-1];
    int i = 0, e = 0;
    while (e<V-1)
    {
        Edge currentEdge = edges[i++];

        int setX = findParent(parent, currentEdge.source);
        int setY = findParent(parent, currentEdge.dest);
        if (setX != setY)
        {
            mst[e++] = currentEdge;
            unionSets(parent, setX, setY);
        }
    }
    cout<<"Minimum Spanning Tree Edges \n";
    for (int i = 0; i < V-1; i++)
    {
        cout<<mst[i].source<<"-"<<mst[i].dest<<": "<<mst[i].weight<<endl;
    }
}
int main()
{
    int V = 4; //no. of vertices
    int E = 6; // no. of edges
    Edge edges[] = {
        {0,1,10},
        {0,2,6},
        {0,3,5},
        {1,2,5},
        {1,3,8},
        {2,3,4}
    };
    KruskalMST(edges,V,E);
    cout<<"\n\tProgrammed By: Krishna Aryal";
    return 0;
}