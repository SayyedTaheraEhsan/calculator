#include <stdio.h>

// Function to flip and invert the image
void flip_and_invert_image(int matrix[][100], int n) {
    // Flip the image horizontally
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][n - j - 1];
            matrix[i][n - j - 1] = temp;
        }
    }
    
    // Invert the image
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = 1 - matrix[i][j];
        }
    }
}

// Function to print the matrix
void print_matrix(int matrix[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;

    // Read the size of the matrix
    printf("Enter the size of the matrix (n): ");
    scanf("%d", &n);

    int matrix[100][100];  // Assuming maximum size is 100x100

    // Read the matrix elements
    printf("Enter the elements of the matrix (0 or 1):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) 
            scanf("%d", &matrix[i][j]);
        
    }

    // Process the matrix
    flip_and_invert_image(matrix, n);

    // Print the resulting matrix
    printf("Resulting matrix after flip and invert:\n");
    print_matrix(matrix, n);

    return 0;
}