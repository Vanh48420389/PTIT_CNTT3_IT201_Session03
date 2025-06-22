//
// Created by Lenovo on 22/06/2025.
//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int m;
    int *arr;



    printf("nhap so luong phan tu : ");
    scanf("%d", &n);

    if (n <= 0 || n >= 1000) {
        printf("So luong phan tu khong hop le!\n");
        return 1;
    }

    arr = (int*)malloc(n * sizeof(int));

    if(arr == NULL){
        printf("khong the cap phat bo nho");
        return  1;
    }



    for(int i = 0; i < n; i++){
        printf("nhap phan tu thu %d : ",i+1);
            scanf("%d", &arr[i]);
        }

    printf("\n");


    printf("So phan tu muon them :");
    scanf("%d", &m);

    if (m <= 0 || m >= 1000) {
        printf("So luong them khong hop le!\n");
        free(arr);
        return 1;
    }



    int *temp = (int*)realloc(arr,(m + n) * sizeof(int));
    if(temp == NULL)
    {
        printf("khong the cap phat bo nho");
        free(arr);
        return 1;
    }
            arr = temp;


    for(int i = 0; i < m; i++)
            {
                printf("nhap phan tu thu %d :  ", n+i+1);
                scanf("%d", &arr[ n+i]);
            }
            n += m;

            printf("\n");

    printf("So phan tu sau khi them la :");

    for(int i = 0; i < n; i++)
            {
                printf("%d ", arr[i]);
            }

            printf("\n");


    free(arr);
    return 0;

}