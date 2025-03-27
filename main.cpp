#include <iostream>

using namespace std;

int main() {
    // Problem 1
    // int M, N;
    // cin >> M >> N;
    //
    // int matrix[M][N];
    // int sum = 0;
    //
    // for (int i = 0; i < M; ++i) {
    //     for (int j = 0; j < N; ++j) {
    //         cin >> matrix[i][j];
    //         sum += matrix[i][j];
    //     }
    // }
    //
    // cout << sum << endl;
    //
    // return 0;

    // Problem 2
        // int M, N;
        // cin >> M >> N;
        //
        // int matrix[M][N];
        //
        // for (int i = 0; i < M; ++i) {
        //     for (int j = 0; j < N; ++j) {
        //         cin >> matrix[i][j];
        //     }
        // }
        //
        // for (int i = 0; i < M; ++i) {
        //     int row_max = matrix[i][0];
        //     for (int j = 1; j < N; ++j) {
        //         if (matrix[i][j] > row_max) {
        //             row_max = matrix[i][j];
        //         }
        //     }
        //     cout << row_max << " ";
        // }
        // cout << endl;
        //
        // return 0;

    // Problem 3
    // int M, N;
    // cin >> M >> N;
    //
    // int matrix[M][N];
    //
    // for (int i = 0; i < M; ++i) {
    //     for (int j = 0; j < N; ++j) {
    //         cin >> matrix[i][j];
    //     }
    // }
    //
    // for (int j = 0; j < N; ++j) {
    //     int col_sum = 0;
    //     for (int i = 0; i < M; ++i) {
    //         col_sum += matrix[i][j];
    //     }
    //     cout << col_sum << " ";
    // }
    // cout << endl;
    //
    // return 0;

    // Problem 4
    // int N;
    // cin >> N;
    //
    // int matrix[N][N];
    // int diagonal_sum = 0;
    //
    // for (int i = 0; i < N; ++i) {
    //     for (int j = 0; j < N; ++j) {
    //         cin >> matrix[i][j];
    //         if (i == j) {
    //             diagonal_sum += matrix[i][j];
    //         }
    //     }
    // }
    //
    // cout << diagonal_sum << endl;
    //
    // return 0;

    // Problem 5
    // int M, N;
    // cin >> M >> N;
    //
    // int matrix[M][N];
    //
    // for (int i = 0; i < M; ++i) {
    //     for (int j = 0; j < N; ++j) {
    //         cin >> matrix[i][j];
    //     }
    // }
    //
    // int transpose[N][M];
    //
    // for (int i = 0; i < M; ++i) {
    //     for (int j = 0; j < N; ++j) {
    //         transpose[j][i] = matrix[i][j];
    //     }
    // }
    //
    // for (int i = 0; i < N; ++i) {
    //     for (int j = 0; j < M; ++j) {
    //         cout << transpose[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    //
    // return 0;

    // Problem 6
        // int M, N, P;
        // cin >> M >> N >> P;
        //
        // int A[M][N], B[N][P], result[M][P];
        //
        // for (int i = 0; i < M; ++i) {
        //     for (int j = 0; j < N; ++j) {
        //         cin >> A[i][j];
        //     }
        // }
        //
        // for (int i = 0; i < N; ++i) {
        //     for (int j = 0; j < P; ++j) {
        //         cin >> B[i][j];
        //     }
        // }
        //
        // for (int i = 0; i < M; ++i) {
        //     for (int j = 0; j < P; ++j) {
        //         result[i][j] = 0;
        //         for (int k = 0; k < N; ++k) {
        //             result[i][j] += A[i][k] * B[k][j];
        //         }
        //     }
        // }
        //
        // for (int i = 0; i < M; ++i) {
        //     for (int j = 0; j < P; ++j) {
        //         cout << result[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        //
        // return 0;

    // Problem 7
    // int N;
    // cin >> N;
    //
    // int matrix[N][N];
    //
    // for (int i = 0; i < N; ++i) {
    //     for (int j = 0; j < N; ++j) {
    //         cin >> matrix[i][j];
    //     }
    // }
    //
    // for (int i = 0; i < N; ++i) {
    //     for (int j = i + 1; j < N; ++j) {
    //         swap(matrix[i][j], matrix[j][i]);
    //     }
    // }
    //
    // for (int i = 0; i < N; ++i) {
    //     for (int j = 0; j < N / 2; ++j) {
    //         swap(matrix[i][j], matrix[i][N - j - 1]);
    //     }
    // }
    //
    // for (int i = 0; i < N; ++i) {
    //     for (int j = 0; j < N; ++j) {
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    //
    // return 0;
}
