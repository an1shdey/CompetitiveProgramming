#include <bits/stdc++.h>
using namespace std;
// n = 6 
// 5 4 3
// n = 5
// 4 3
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int arr[n];
		for(int i = 0; i < n; i++)
			cin >> arr[i];
		sort(arr, arr + n);
		for(int i = n - 1; i > (n - 1)/2; i--) {
			cout << arr[i] << " " << arr[0] << endl;
		}
	}
	return 0;
}