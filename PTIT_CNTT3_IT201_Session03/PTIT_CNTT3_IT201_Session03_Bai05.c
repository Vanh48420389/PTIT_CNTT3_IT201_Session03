//
// Created by Lenovo on 22/06/2025.
//
#include <stdio.h>
#include <stdlib.h>

int tongDuongCheoChinh(int** arr, int row, int col)
{
    int duongCheoChinh =0;
    for (int i = 0; i < row; i++)
    {
        duongCheoChinh += arr[i][i];
    }
    return duongCheoChinh;
}
int tongDuongCheoPhu(int** arr, int row, int col)
{
    int duongCheoPhu =0;
    for (int i = 0; i < row; i++)
    {
        duongCheoPhu += arr[i][row - i - 1];
    }
    return duongCheoPhu;
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

    if (row != col)
    {
        printf("khong the tinh duong cheo\n");
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

    printf("\n");


    int sum = tongDuongCheoChinh(arr, row, col);
    int total = tongDuongCheoPhu(arr, row, col );

    printf("Tong duong cheo Chinh la : %d\n", sum);
    printf("Tong duong cheo Phu la : %d", total);

    for (int i = 0; i < row; i++)
    {
        free(arr[i]);
    }
    free(arr);


    return 0;





}

