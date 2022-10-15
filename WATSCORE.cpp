#include <iostream>
#include<vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        vector <int> num(8, 0);
        for(int i=0; i<n; i++) {
            int p, a;
            cin >> p >> a;
            if(p<=8 && a>num[p-1]) {
                num[p-1] = a;
            }
        }
        int sum = 0;
        for(int i=0; i<8; i++) {
            sum += num[i];
        }
        cout << sum << endl;
    }
	return 0;
}
