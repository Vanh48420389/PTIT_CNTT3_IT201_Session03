//
// Created by Lenovo on 20/06/2025.
//
#include <stdio.h>
#include <stdlib.h>
int  maxNumber(int **arr, int row, int col)
{
    int max = arr[0][0];
    for (int i = 1; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    return max;
}
int minNumber(int **arr, int row, int col)
{
    int min = arr[0][0];
    for (int i = 1; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }
    return min;
}

int main()
{
    int **arr;
    int row;
    int col;


    printf("Nhap row :");
    scanf("%d", &row);
    printf("Nhap col :");
    scanf("%d", &col);

    if (row <= 0 || row > 1000 || col <= 0 || col > 1000)
    {
        printf("So hang va cot phai nam trong khoang (1 - 1000).\n");
        return 1;
    }

    arr = (int**)malloc(row  * sizeof(int*));

    for(int i = 0; i < row; i++)
    {
        arr[i] = (int*)malloc(col * sizeof(int));
    }

    if(arr == NULL)
    {
        printf("khong the cap phat bo nho");
        return 1;
    }


    printf("nhap cac phan tu trong mang : \n");
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                printf("nhap arr[%d][%d] : ",i, j);
                scanf("%d", &arr[i][j]);
            }
        }

    printf("\nMang 2 chieu:\n");
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }


    int max = maxNumber(arr, row, col);
    int min = minNumber(arr, row, col);

    printf("\nGia tri lon nhat trong mang la : %d", max);
    printf("\nGia tri nho nhat trong mang la : %d", min);

    for (int i = 0; i < row; i++)
    {
        free(arr[i]);
    }
    free(arr);


    return 0;
}