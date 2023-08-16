#include<stdio.h>

void Calc(int n);
void MatrixAddition();
void MatrixSubtraction();
void MatrixMultiplication();

void main()
{   
    int n;
    printf("\n\n\t\t!!!Welcome to Matrix Calculator!!!!\n\n\n");
    while(2 > 1)
    {
        printf("Press 1 for Matrix Addition.\nPress 2 for Matrix Subtraction\nPress 3 for Matrix Multiplication.\nPress 4 to exit the program.\n");
        scanf("%d", &n);
        if(n == 4)
        {
            break;
        }
        else
        {
            Calc(n);
        }
        printf("\n\n");
    }
}

void Calc(int n)
{
    if(n == 1)
    {
        MatrixAddition();
    }
    else if(n == 2)
    {
        MatrixSubtraction();
    }
    else if(n == 3)
    {
        MatrixMultiplication();
    }
    else
    {
        printf("Please enter a valid number.");
    }
}

void MatrixAddition()
{   
    int r1, r2, c1, c2;

    printf("Enter number of rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter number of rows and comlumns for the second matrix: ");
    scanf("%d %d", &r2, &c2);

    if(r1 == r2 && c1 ==  c2)
    {
        int SumMatrix[r1][c1];
        int Matrix1[r1][c1], Matrix2[r2][c2];

        printf("Enter the elements of the first matrix:\n");
        for(int i = 0;i < r1;i++)
        {
            for(int j = 0;j < c1;j++)
            {
                scanf("%d", &Matrix1[i][j]);
            }
        }

        printf("Enter the elements of the second matrix:\n");
        for(int i = 0;i < r2;i++)
        {
            for(int j = 0;j < c2;j++)
            {
                scanf("%d", &Matrix2[i][j]);
            }
        }

        for(int i = 0;i < r1;i++)
        {
            for(int j = 0;j < c1;j++)
            {
                SumMatrix[i][j] = Matrix1[i][j] + Matrix2[i][j];
            }
        }
        printf("Here is the subtraction result of Matrix 1 and Matrix 2:\n");
        printf("\n");
        for(int i = 0;i < r1;i++)
        {
            for(int j = 0;j < c1;j++)
            {
                printf("%d   ", SumMatrix[i][j]);
            }
            printf("\n\n");
        }
    }
    else
    {
        printf("Dimensions of the two matrices are not same! Please check their dimensions again.");
    }

}

void MatrixSubtraction()
{   
    int r1, r2, c1, c2, n;

    printf("Enter number of rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter number of rows and comlumns for the second matrix: ");
    scanf("%d %d", &r2, &c2);

    if(r1 == r2 && c1 ==  c2)
    {
        int SubMatrix[r1][c1];
        int Matrix1[r1][c1], Matrix2[r2][c2];

        printf("Enter the elements of the first matrix:\n");
        for(int i = 0;i < r1;i++)
        {
            for(int j = 0;j < c1;j++)
            {
                scanf("%d", &Matrix1[i][j]);
            }
        }

        printf("Enter the elements of the second matrix:\n");
        for(int i = 0;i < r2;i++)
        {
            for(int j = 0;j < c2;j++)
            {
                scanf("%d", &Matrix2[i][j]);
            }
        }

        printf("Press 1 if you want do (Matrix 1 - Matrix 2).\nPress 2 if you want to do (Matrix 2 - Matrix 1).\n");
        scanf("%d", &n);

        if(n == 1)
        {
            for(int i = 0;i < r1;i++)
            {
            for(int j = 0;j < c1;j++)
            {
                SubMatrix[i][j] = Matrix1[i][j] - Matrix2[i][j];
            }
            }
            printf("Here is the subtraction result of Matrix 1 and Matrix 2:\n");
            printf("\n");
            for(int i = 0;i < r1;i++)
            {
                for(int j = 0;j < c1;j++)
                {
                    printf("%d   ", SubMatrix[i][j]);
                }
                printf("\n\n");
            }
        }
        else if(n == 2)
        {
            for(int i = 0;i < r1;i++)
            {
                for(int j = 0;j < c1;j++)
                {
                    SubMatrix[i][j] = Matrix2[i][j] - Matrix1[i][j];
                }
            }
            printf("Here is the subtraction result of Matrix 2 and Matrix 1:\n"); 
            printf("\n");
            for(int i = 0;i < r1;i++)
            {
                for(int j = 0;j < c1;j++)
                {
                    printf("%d   ", SubMatrix[i][j]);
                }
                printf("\n\n");
            }
        }
        else
        {
            printf("Dimensions of the two matrices are not same! Please check their dimensions again.");
        }
    }

}

void MatrixMultiplication()
{
    int r1, r2, c1, c2;

    printf("Enter number of rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter number of rows and comlumns for the second matrix: ");
    scanf("%d %d", &r2, &c2);

    
        int MultMatrix[r1][c2];
        int Matrix1[r1][c1], Matrix2[r2][c2];

        printf("Enter the elements of the first matrix:\n");
        for(int i = 0;i < r1;i++)
        {
            for(int j = 0;j < c1;j++)
            {
                scanf("%d", &Matrix1[i][j]);
            }
        }

        printf("Enter the elements of the second matrix:\n");
        for(int i = 0;i < r2;i++)
        {
            for(int j = 0;j < c2;j++)
            {
                scanf("%d", &Matrix2[i][j]);
            }
        }

        for(int i = 0;i < r1;i++)
        {
            for(int j = 0;j < c2;j++)
            {
                MultMatrix[i][j] = 0;
                for(int k = 0;k < c1;k++)
                {
                    MultMatrix[i][j] += (Matrix1[i][k] * Matrix2[k][j]);
                }
            }
        }
        
         printf("Here is the multiplication result of Matrix 1 and Matrix 2:\n");
         printf("\n");
         for(int i = 0;i < r1;i++)
         {
            for(int j = 0;j < c2;j++)
            {
                printf("%d  ", MultMatrix[i][j]);
            }
            printf("\n");
         }
     
}