#include<iostream>
#include<queue>
using namespace std;

class BFS
{
public:
    int a[10][10],n;
    void traversal(int a[10][10],int n, int start)
    {
        int node;
        bool* visited = new bool[n]{false};
        visited[start]= true;

        queue<int>q;
        q.push(start);

        while(!q.empty())
        {
            node = q.front();
            cout<<" "<<node;
            q.pop();
            for(int i=0;i<n;++i)
            {
                if(a[node][i] && !visited[i])
                {
                    visited[i]=true;
                    q.push(i);
                }
            }
        }
    }
};
int main()
{
    BFS obj;
    int start;
    cout<<"Enter number of nodes: ";
    cin>>obj.n;
    cout<<"\nEnter the adjacency graph:\n";
    for(int i=0;i<obj.n;i++)
    {
        for(int j=0;j<obj.n;j++)
            cin>>obj.a[i][j];
    }
    cout<<"\nEnter the starting node: ";
    cin>>start;
    obj.traversal(obj.a,obj.n,start);
    return 0;
}
