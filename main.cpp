#include <iostream>
#include <vector>

using namespace std;

// Problem 1
int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> matrix(N, vector<int>(M));
    int sum = 0;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> matrix[i][j];
            sum += matrix[i][j];
        }
    }

    cout << sum << endl;

    return 0;
}
