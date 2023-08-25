#include <iostream>
using namespace std;

class knap
{
public:
    int max(int a, int b) { return (a > b) ? a : b; }

    int knapSack(int W, int wt[], int val[], int n)
    {
        if (n == 0 || W == 0)
            return 0;
        if (wt[n - 1] > W)
            return knapSack(W, wt, val, n - 1);
        else
            return max(
                val[n - 1]
                    + knapSack(W - wt[n - 1], wt, val, n - 1),
                knapSack(W, wt, val, n - 1));
    }
};

int main()
{
    knap k;
	int w,n;
	cout<<"enter n : ";
    cin>>n;
    cout<<"enter total weight : ";
    cin>>w;
    int profit[n];
    int weight[n];
    for (int i=0;i<n;i++)
    {
        cout<<"enter profit and weight of "<<i<<" : ";
        cin>>profit[i]>>weight[i];
    }
	cout << "maximum profit : " <<k.knapSack(w, weight, profit, n);
	return 0;
}
