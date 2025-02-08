#include <bits/stdc++.h>
using namespace std;

int main()
{
  int i, j, p = 1, k;
  int n;
  cout << " enter the value of n " << endl;
  cin >> n;
  int arr[n];
  arr[0] = 1;
  for (i = 1; i < n / 2; i++)
  {
    p = p + 2;
    arr[i] = p;
  }
  cout << i << endl;
  k = arr[i - 1] + 1;

  arr[i] = k;
  for (int j = i + 1; j < n; j++)
  {
    k = k - 2;

    arr[j] = k;
  }
  
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << endl;
  }
}