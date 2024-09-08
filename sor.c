#include<stdio.h>
int sockMerchant(int n,  int* ar) {
  int pair_count = 0;
  int max=ar[0];
  for(int i=0;i<n;i++)
  {
      if(ar[i]>max)
        max=ar[i];
  }
    int color_count[max+1];
     // since color values are between 1 to 100 based on constraints
    for(int i=0;i<max+1;i++)
    {
        color_count[i]=0;
    }
    // Count each color occurrence
    for (int i = 0; i < n; i++) {
        color_count[ar[i]]++;
    }

    // Count pairs based on occurrences
    for (int i = 1; i <= 100; i++) {
        if (color_count[i] >= 2) {
            pair_count += color_count[i] / 2;
        }
    }

    return pair_count;
}
int main() {
    int n=9;
    // scanf("%d", &n);
    
    int ar[]={10,10,20,45,20,30,1,2,89};
  

    // int result = sockMerchant(n, ar);
    // printf("%d\n", result);

    return 0;
}