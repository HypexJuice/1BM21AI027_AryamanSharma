#include<iostream>
using namespace std;
class MergeSort
{
public:
    int l,r,count=0;
    int a[1000],b[1000],c[1000];
    void split(int a[], int l,int r)
    {
        int m;
        if(l<r)
        {
            count++;
            m=l+(r-l)/2;
            split(a,l,m);
            split(a,m+1,r);
            Merge(a,l,m,r);
        }
    }
    void Merge(int a[],int l, int m, int r)
    {
        int i=0, j=0, k=0, n1 = m-l+1, n2 = r-m;
        int b[n1], c[n2];
        for (i = 0; i < n1; i++)
            b[i] = a[l + i];
        for (j = 0; j < n2; j++)
            c[j] = a[m + 1 + j];
        i=0;
        j=0;
        k=l;

        while( i<n1 && j<n2 )
        {
            if(b[i]<=c[j])
            {
                a[k]=b[i];
                i++;
            }
            else
            {
                a[k]=c[j];
                j++;
            }
            k++;
        }

        while (i < n1)
            a[k++] = b[i++];


        while (j < n2)
            a[k++] = c[j++];
    }
};
int main()
{
    MergeSort obj;
    float n;
    cout<<"Enter size of array";
    cin>>n;
    obj.r=n;
    cout<<"\nUnsorted Array";
    for(int i=0;i<obj.r;i++)
            obj.a[i]=i;
    obj.l=0;
    obj.split(obj.a,obj.l,obj.r-1);
    cout<<"\ncount/n:"<<(obj.count/n);
    cout<<"\ncount/n2:"<<(obj.count/(n*n));
    cout<<"\ncount/n3:"<<(obj.count/(n*n*n));
    return 0;
}
