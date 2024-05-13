#include <stdio.h>
void read(int mat[10][10], int r, int c) 
{
	int i,j;
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < r; i++) 
	{
        for (j = 0; j < c; j++) 
		{
            scanf("%d", &mat[i][j]);
        }
    }
}

void disp(int mat[10][10], int r, int c) 
{
	int i,j;
    printf("Matrix elements:\n");
    for (i = 0; i < r; i++) 
	{
        for (j = 0; j < c; j++) 
		{
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void add(int matA[10][10], int matB[10][10], int res[10][10], int r, int c) 
{
	int i,j;
    for (i = 0; i < r; i++) 
	{
        for (j = 0; j < c; j++) 
		{
            res[i][j] = matA[i][j] + matB[i][j];
        }
    }
}

void sub(int matA[10][10], int matB[10][10], int res[10][10], int r, int c) 
{
	int i,j;
    for (i = 0; i < r; i++) 
	{
        for (j = 0; j < c; j++) 
		{
            res[i][j] = matA[i][j] - matB[i][j];
        }
    }
}

void multiply(int matA[10][10], int matB[10][10], int res[10][10], int rA, int cA, int cB) 
{
	int i,j,k;
    for (i = 0; i < rA; i++)
	{
        for (j = 0; j < cB; j++) 
		{
            res[i][j] = 0;
            for (k = 0; k < cA; k++) 
			{
                res[i][j] += matA[i][k] * matB[k][j];
            }
        }
    }
}

int main() {
    int rA, cA, rB, cB;
	int matA[10][10],matB[10][10];
    printf("Enter the number of rows and columns for Matrix A: ");
    scanf("%d %d", &rA, &cA);
    read(matA, rA, cA);
    printf("Enter the number of rows and columns for Matrix B: ");
    scanf("%d %d", &rB, &cB);
    read(matB, rB, cB);
	if (rA != rB || cA != cB) 
	{
        printf("Matrix addition and subtraction are only possible for matrices of the same size.\n");
    } 
	else 
	{
        int resAdd[10][10], resSub[10][10];
        add(matA, matB, resAdd, rA, cA);
        sub(matA, matB, resSub, rA, cA);
        printf("Matrix A:\n");
        disp(matA, rA, cA);
        printf("Matrix B:\n");
        disp(matB, rB, cB);
        printf("Matrix A + Matrix B:\n");
        disp(resAdd, rA, cA);
        printf("Matrix A - Matrix B:\n");
        disp(resSub, rA, cA);
    }

    if (cA != rB) 
	{
        printf("Matrix multiplication is not possible for the given matrices.\n");
    } 
	else
	{
        int resMul[10][10];
        multiply(matA, matB, resMul, rA, cA, cB);
        printf("Matrix A * Matrix B:\n");
        disp(resMul, rA, cB);
    }
    return 0;
}


