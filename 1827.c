#include <stdio.h>
#include <stdlib.h>

int ** createMatrix(int size);
void printMatrix(int **matrix, int size);
int ** insertMiddleNumber(int ** matrix, int size);
int main()
{
   int size, **matrix;
   scanf("%d", &size);
   //printf("%d\n",size);  
   matrix = createMatrix(size);
   matrix = insertMiddleNumber(matrix, size);
   printMatrix(matrix, size);
   return(0); 
}


int ** createMatrix(int size)
{
   int i, j, **matrix;

   matrix = malloc(sizeof(int *) * size);
   for(i = 0; i < size; i++)
   {
       matrix[i] = malloc (sizeof (int) * size);
   }
   for(i = 0; i < size; i++)
   {
        for(j = 0; j < size; j++)
        {
            matrix[i][j] = 0;
        }
   }
   return matrix;
}
void printMatrix(int **matrix, int size)
{
    int i, j;    
    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
            printf("%d",matrix[i][j]);
        }
        printf("\n");
    }
}
int ** insertMiddleNumber(int ** matrix, int size)
{
    matrix[(size/2)][(size/2)] = 4;
    return matrix;
}
