//
// Created by Lenovo on 22/06/2025.
//
#include <stdio.h>
#include <stdlib.h>
int tongTrongHang(int **arr, int row, int col, int k)
{
    int sum = 0;
    if (k < 0 || k >= row) {
        printf("So hang k khong hop le!\n");
        return 0;
    }
    for (int j = 0; j < col; j++)
    {
        sum += arr[k][j];
    }
    return sum;
}
int main()
{
    int **arr;
    int row;
    int col;
    int k =0;



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
        if (arr[i] == NULL) {
            printf("Khong the cap phat bo nho cho arr[%d].\n", i);
            for (int j = 0; j < i; j++) {
                free(arr[j]);
            }
            free(arr);
            return 1;
        }
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

    printf("Nhap so hang ban muon tinh (0-%d) :", row -1);
    scanf("%d", &k);

    int sum = tongTrongHang(arr, row, col, k);
    printf("Tong trong hang %d la %d",k,sum);






    for (int i = 0; i < row; i++)
    {
        free(arr[i]);
    }
    free(arr);


    return 0;


}