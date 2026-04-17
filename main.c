#include <stdio.h>
#include <stdlib.h>

#include "sparseMatrix.h"

int main() {
    sparseMatrix* sm = createSparseMatrix(10, 10);

    for (int i = 0; i < 20; i++) {
        addElementSparseMatrix(sm, i % 10, (i * 3) % 10, i + 1);
    }

    printf("원본 행렬:\n");
    printSparseMatrix(sm);

    int moveCount;
    sparseMatrix* trans = transposeSparseMatrix(sm, &moveCount);

    printf("\n전치 행렬:\n");
    printSparseMatrix(trans);

    printf("\n데이터 이동 횟수: %d\n", moveCount);

    return 0;
}