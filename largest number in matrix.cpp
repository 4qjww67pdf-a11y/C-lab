#include <stdio.h>

#define ROW 3
#define COL 4

int main()
{
    int i, j;
    int mat[ROW][COL];
    int largest;

    printf("Enter the elements of 3x4 matrix:\n");

    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    /* Assume first element is largest */
    largest = mat[0][0];

    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            if(mat[i][j] > largest)
            {
                largest = mat[i][j];
            }
        }
    }

    printf("The largest element is = %d", largest);
    return 0;
}
