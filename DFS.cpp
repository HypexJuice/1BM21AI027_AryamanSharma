#include<iostream>
#include<stack>
using namespace std;

class DFS
{
public:
    int n,a[10][10];
    void traversal(int a[10][10],int n, int start)
    {
        int node,count=0;
        bool *visited = new bool[n]{false};
        stack<int>s;
        s.push(start);
        while(!s.empty())
        {
            node = s.top();
            cout<<" "<<node;
            s.pop();
            count++;
            for(int i=0;i<n;++i)
            {
                if(a[node][i] && !visited[i])
                {
                    visited[i]=true;
                    s.push(i);
                }
            }
        }
        if(count<n)
            cout<<"\nDisjoint";
        else
            cout<<"\nJoint";
    }
};
int main()
{
    DFS obj;
    int start;
    cout<<"\nEnter number of nodes: ";
    cin>>obj.n;
    cout<<"\nEnter the adjacency matrix:\n";
    for(int i=0;i<obj.n;i++)
    {
        for(int j=0;j<obj.n;j++)
            cin>>obj.a[i][j];
    }
    cout<<"\nEnter the start node: ";
    cin>>start;
    obj.traversal(obj.a,obj.n,start);
    return 0;
}
