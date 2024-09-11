// sparse_matrix_assignment.c
// This program represents a sparse matrix using a 2D array in C and includes test cases.

#include <stdio.h>
#include <stdbool.h>

#define MAX 100  // Maximum number of non-zero elements in the sparse matrix
#define N 4      // Number of columns in the original matrix (modifiable)

// Function prototypes
void createSparseMatrix(int sparseMatrix[][3], int originalMatrix[][N], int rows, int cols);
void printSparseMatrix(int sparseMatrix[][3], int nonZeroCount);
bool testCreateSparseMatrix();
bool testPrintSparseMatrix();

int main() {
    // Run test cases
    if (testCreateSparseMatrix()) {
        printf("testCreateSparseMatrix PASSED\n");
    } else {
        printf("testCreateSparseMatrix FAILED\n");
    }

    if (testPrintSparseMatrix()) {
        printf("testPrintSparseMatrix PASSED\n");
    } else {
        printf("testPrintSparseMatrix FAILED\n");
    }

    return 0;
}

// Function to convert a matrix into sparse matrix format
void createSparseMatrix(int sparseMatrix[][3], int originalMatrix[][N], int rows, int cols) {
    //WRITE THE FUNCTION DESCRIPTION HERE
    
// A sparse matrix format stores only the non-zero elements and their positions,
// significantly reducing the memory usage when most elements in the matrix are zero.

// Parameters:
//   sparseMatrix[][3] - An output 2D array where each row contains:
//                        - the row index,
//                        - the column index,
//                        - and the value of a non-zero element from the original matrix.
//   originalMatrix[][N] - The input 2D matrix to be converted into sparse matrix format.
//   rows - The number of rows in the original matrix.
//   cols - The number of columns in the original matrix.

// The function traverses the original matrix, identifies non-zero elements, and
// stores their row index, column index, and value into the sparseMatrix array.
    

}

// Function to print sparse matrix representation
void printSparseMatrix(int sparseMatrix[][3], int nonZeroCount) {
    //WRITE THE FUNCTION DESCRIPTION HERE


// The sparse matrix format is a 2D array where each row stores information about a non-zero element.
// Each row in the sparseMatrix contains:
//   - The row index of the non-zero element.
//   - The column index of the non-zero element.
//   - The value of the non-zero element.

// Parameters:
//   sparseMatrix[][3] - The sparse matrix array where each row contains the row index, 
//                       column index, and the value of a non-zero element.
//   nonZeroCount - The number of non-zero elements in the sparseMatrix (i.e., the number of rows in the sparse matrix).

// The function will print the row index, column index, and value of each non-zero element in a tabular format.








    

}

//--------------------------------------------------------
//DON'T CHANGE THE CODE BELOW THIS!
//--------------------------------------------------------
// TEST CASES

// Test function for createSparseMatrix
bool testCreateSparseMatrix() {
    int originalMatrix[4][N] = {
        {0, 0, 3, 0},
        {0, 4, 0, 0},
        {0, 0, 0, 5},
        {0, 2, 0, 6}
    };

    int expectedSparseMatrix[MAX][3] = {
        {4, 4, 5},   // 4x4 matrix with 5 non-zero elements
        {0, 2, 3},   // Original matrix[0][2] = 3
        {1, 1, 4},   // Original matrix[1][1] = 4
        {2, 3, 5},   // Original matrix[2][3] = 5
        {3, 1, 2},   // Original matrix[3][1] = 2
        {3, 3, 6}    // Original matrix[3][3] = 6
    };

    int sparseMatrix[MAX][3];
    createSparseMatrix(sparseMatrix, originalMatrix, 4, N);

    // Compare the sparseMatrix with the expectedSparseMatrix
    for (int i = 0; i <= expectedSparseMatrix[0][2]; i++) {
        for (int j = 0; j < 3; j++) {
            if (sparseMatrix[i][j] != expectedSparseMatrix[i][j]) {
                return false;  // If any value doesn't match, test fails
            }
        }
    }

    return true;  // Test passes if all values match
}

// Test function for printSparseMatrix
bool testPrintSparseMatrix() {
    // Define a sparse matrix with 5 non-zero elements
    int sparseMatrix[MAX][3] = {
        {4, 4, 5},   // 4x4 matrix with 5 non-zero elements
        {0, 2, 3},   // Original matrix[0][2] = 3
        {1, 1, 4},   // Original matrix[1][1] = 4
        {2, 3, 5},   // Original matrix[2][3] = 5
        {3, 1, 2},   // Original matrix[3][1] = 2
        {3, 3, 6}    // Original matrix[3][3] = 6
    };

    // Simulate a successful print (visual inspection may be needed for testing this)
    printf("Expected Sparse Matrix Output:\n");
    printSparseMatrix(sparseMatrix, sparseMatrix[0][2]);

    // Since printSparseMatrix only prints the output, we assume it passes if the format is correct
    return true;
}
