#include <iostream>
using namespace std;

class binomial
{
public:
    int binomialCoeff(int n, int k)
    {
        if (k > n)
            return 0;
        if (k == 0 || k == n)
            return 1;

        return binomialCoeff(n - 1, k - 1) + binomialCoeff(n - 1, k);
    }
};

int main()
{
    binomial b;
	int n,k;
	cout<<"enter n and k : ";
	cin>>n>>k;
	cout << "Value of C(" << n << ", " << k << ") is " << b.binomialCoeff(n, k);
	return 0;
}
