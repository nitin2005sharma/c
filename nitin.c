include <stdio.h>

int main() {
    int matrix[10][10], m, n;

    printf("Enter the number of rows (m): ");
    scanf("%d", &m);

    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Sort each row
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n - 1; j++) {
            // Find the minimum element in the unsorted part
            int min_index = j;
            for (int k = j + 1; k < n; k++) {
                if (matrix[i][k] < matrix[i][min_index]) {
                    min_index = k;
                }
            }

            // Swap the minimum element with the first element
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][min_index];
            matrix[i][min_index] = temp;
        }
    }

    printf("Sorted matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;