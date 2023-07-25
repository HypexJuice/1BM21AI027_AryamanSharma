#include<iostream>
using namespace std;

struct edge
{
    int ind=0;
    int ver[10];
};

int main()
{
    int n,m,n1,n2,i,j,k,l;
    cout<<"enter number of vertices : ";
    cin>>n;

    struct edge e[n];

    cout<<"enter number of edges : ";
    cin>>m;

    for(int i=0;i<n;i++)
    {
        cout<<"enter the number of indegree vertices for vertex "<<i<<" : ";
        cin>>n1;
        e[i].ind=n1;

        for(int j=0;j<n1;j++)
        {
            cout<<"enter the vertex : ";
            cin>>e[i].ver[j];
        }
    }

    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if (e[j].ind==0)
            {
                e[j].ind=-1;
                cout<<j;
            }
            for (int k=0;k<n;k++)
            {
                n2=e[k].ind;
                for (int l=0;l<n2;l++)
                    if (e[k].ver[l]==j && e[k].ind>0)
                    {
                        e[k].ind--;
                    }
            }
        }
    }
}
