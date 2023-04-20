//Find the trailing zeros for the array of factorial of numbers

#include<bits/stdc++.h>

using namespace std;

int main() {
  long long int t, n, i, count;

  cin >> t;

  while (t--) 
  {
    count = 0;

    cin >> n;
    long long int a[n];

    for (i = 0; i < n; i++) 
    {
      cin >> a[i];
    }

    for (i = 0; i < n; i++) 
    {
      while (a[i] >= 5) 
      {
        a[i] = a[i] / 5;
        count += a[i];
      }
    }

    cout << count << endl;
  }

  return 0;
}