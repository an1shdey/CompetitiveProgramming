#include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin>>n;
    vector<int> a(n);
    int sum=0,smallestOdd=-1;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        if (a[i] % 2 != 0) {
            if (smallestOdd == -1 || a[i] < smallestOdd) {
                smallestOdd = a[i];
            }
        }
    }

    if (sum % 2 == 0) {
        cout << sum << endl;
    } else {
        if (smallestOdd != -1) {
            cout << sum - smallestOdd << endl;
        } else {
            cout << 0 << endl;
        }
    }

    return 0;

  }