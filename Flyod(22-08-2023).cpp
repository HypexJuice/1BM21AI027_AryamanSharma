#include <iostream>
using namespace std;
#define N 100
#define INF 999

class floyd
{
public:
    void printMatrix(int matrix[N][N],int n) {
      for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
          if (matrix[i][j] == INF)
            printf("%4s", "INF");
          else
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
      }
    }

    void floydWarshall(int graph[N][N], int n) {
      int matrix[N][N], i, j, k;

      for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
          matrix[i][j] = graph[i][j];

      for (k = 0; k < n; k++) {
        for (i = 0; i < n; i++) {
          for (j = 0; j < n; j++) {
            if (matrix[i][k] + matrix[k][j] < matrix[i][j])
              matrix[i][j] = matrix[i][k] + matrix[k][j];
          }
        }
      }
      printMatrix(matrix,n);
    }
};

int main() {
    floyd f;
  int graph[N][N];
  int n;

  cout<<"Enter n : ";
  cin>>n;
  cout<<"Enter graph (999 for infinity) : "<<endl;
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          cin>>graph[i][j];
      }
  }
  f.floydWarshall(graph,n);
}
