#include<iostream>
#include<cmath>
using namespace std;
class Quick{
    public:
    int a[1000],l,h,count;
    float n;
    void swap(int *x, int *y)
    {
        int t = *x;
        *x = *y;
        *y = t;
    }
    int partition(int a[], int l, int h)
    {
        int p = a[h];
        int i = (l - 1);
        for (int j = l; j < h; j++)
        {
            if (a[j] <= p)
            {
                i++;
                swap(&a[i], &a[j]);
            }
        }
        count++;
        swap(&a[i + 1], &a[h]);
        return (i + 1);
    }

    void quickSort(int a[], int l, int h)
    {
        if (l < h)
        {
            int pi = partition(a, l, h);
            quickSort(a,l, pi - 1);
            quickSort(a, pi + 1, h);
        }
    }
};

int main()
{
  Quick obj;
  cout<<"\nEnter n";
  cin>>obj.n;
  for(int i=0;i<obj.n;i++)
        obj.a[i]=i;
  obj.quickSort(obj.a, 0, obj.n - 1);
  cout<<"\ncount/n:"<<(obj.count/obj.n);
  cout<<"\ncount/nlogn:"<<(obj.count/(obj.n*log(obj.n)));
  cout<<"\ncount/n2:"<<(obj.count/(obj.n*obj.n));
  cout<<"\ncount/n3:"<<(obj.count/(obj.n*obj.n*obj.n));
  return 0;
}

