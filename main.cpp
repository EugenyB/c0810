#include <iostream>

static const int N = 5;
using namespace std;

int main() {
//    int a[] = {5, 3, 6, 9, -4, 2, -7, 0, 8, 11};
//    for (int i = 0; i < 10; i++) {
//        cout << i << "   " << a[i] << endl;
//    }

    int a[N];
    for (int i = 0; i < N; ++i) {
        cout << "a[" << i << "]=";
        cin >> a[i];
    }
    
    int sum = 0;
    for (int i=0; i<N; i++) {
        sum += a[i];
        //sum = sum + a[i];
    }

    cout << "sum = " << sum << endl;
    return 0;
}