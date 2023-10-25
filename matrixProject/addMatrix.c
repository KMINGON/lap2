#include <stdio.h>
#include <stdlib.h>

int main()
{
	int row, col;
	int **matrix1, **matrix2;

	printf("input row col : ");
	scanf("%d %d", &row, &col);

	matrix1 = (int**)malloc(sizeof(int*) * row);
	matrix2 = (int**)malloc(sizeof(int*) * row);

	for(int i = 0; i < col; i++){
		matrix1[i] = (int*)malloc(sizeof(int) * col);
		matrix2[i] = (int*)malloc(sizeof(int) * col);
	}

	printf("input matrix1\n");
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			scanf("%d", &matrix1[i][j]);
		}
	}

	printf("input matrix2\n");
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			scanf("%d", &matrix2[i][j]);
		}
	}

	printf("result\n");
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			printf("%d ", matrix1[i][j] + matrix2[i][j]);
		}
		printf("\n");
	}
	
	for(int i = 0; i < row; i++){
		free(matrix1[i]);
		free(matrix2[i]);
	}
	
	free(matrix1);
	free(matrix2);

	return 0;
}
