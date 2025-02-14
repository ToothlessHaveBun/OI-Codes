#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    int count = 0;
    for (int i = 0; i <= N; ++i) {
        for (int j = 0; j <= N; ++j) {
            for (int k = 0; k <= N; ++k) {
                if (i != j && j != k && i != k && (i * 100 + j * 10 + k) % 2 != 0 && i != 0) {
                    ++count;
                }
            }
        }
    }

    cout << count << endl;

    return 0;
}
