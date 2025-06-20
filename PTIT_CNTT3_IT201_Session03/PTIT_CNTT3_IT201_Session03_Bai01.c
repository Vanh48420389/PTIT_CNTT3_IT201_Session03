//
// Created by Lenovo on 20/06/2025.
//
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int *arr;

    arr = (int*)malloc(n * sizeof(int));

    if(arr == NULL){
        printf("khong the cap phat bo nho");
        return  1;
    }

    printf("nhap so luong phan tu : ");
    scanf("%d", &n);

    if(n > 0 || n < 1000){

        for(int i = 0; i < n; i++){
            printf("nhap phan tu thu %d : ",i+1);
            scanf("%d", &arr[i]);
        }

        for(int i = 0; i < n; i++){
            printf("%d ", arr[i]);
        }
    }

    free(arr);
    return 0;
}