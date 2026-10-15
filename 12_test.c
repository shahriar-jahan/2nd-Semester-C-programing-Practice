#include <stdio.h>

int main() {
    int N, boundaryVal;
    int i, j;

    printf("Enter matrix size N: ");
    scanf("%d", &N);

    printf("Enter boundary value: ");
    scanf("%d", &boundaryVal);

    int matrix[N][N];

    // ম্যাট্রিক্স তৈরি করার লজিক
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            // প্রথম সারি (i == 0), শেষ সারি (i == N - 1),
            // প্রথম কলাম (j == 0), বা শেষ কলাম (j == N - 1) হলে
            if (i == 0 || i == N - 1 || j == 0 || j == N - 1) {
                matrix[i][j] = boundaryVal;
            } else {
                matrix[i][j] = 0;
            }
        }
    }

    // ম্যাট্রিক্স প্রিন্ট করা
    printf("\nBoundary Matrix Pattern:\n\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}