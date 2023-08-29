#include <iostream>
#define N 100
static int total_nodes;
using namespace std;
void printValues(int A[], int n){
   for (int i = 0; i < n; i++) {
      cout<<"\t"<<A[i];
   }
   printf("\n");
}
void subset_sum(int s[], int t[], int s_size, int t_size, int sum, int ite, int const target_sum){
   total_nodes++;
   if (target_sum == sum) {
      printValues(t, t_size);
      subset_sum(s, t, s_size, t_size - 1, sum - s[ite], ite + 1, target_sum);
      return;
   }
   else {
      for (int i = ite; i < s_size; i++) {
         t[t_size] = s[i];
         subset_sum(s, t, s_size, t_size + 1, sum + s[i], i + 1, target_sum);
      }
   }
}
void generateSubsets(int s[], int n, int target_sum){
   int* tuplet_vector = (int*)malloc(n * sizeof(int));
   subset_sum(s, tuplet_vector, n, 0, 0, 0, target_sum);
   free(tuplet_vector);
}
int main(){
   int s[N];
   int target,n;
   cout<<"Enter Size: ";
   cin>> n;
   for(int i=0;i<n;i++)
   {
       cout<<"\nEnter"<<i+1<<"Element: ";
       cin>>s[i];
   }
   cout<<"\nThe set is: ";
   for(int i=0;i<n;i++)
    cout<<"\t"<<s[i];

   cout<<"\nEnter Target: ";
   cin>>target;
   printValues(s , n);
   generateSubsets(s, n, target);
   return 0;
}
