//
// Created by Lenovo on 17/06/2025.
//
#include <stdio.h>
#include <stdlib.h>

void menu(){
    printf("MENU \n");
    printf("1. Nhap mang \n");
    printf("2. In mang\n");
    printf("3. Them phan tu vao mang\n");
    printf("4. Xoa phan tu khoi mang\n");
    printf("5. Cap nhat phan tu trong mang\n");
    printf("0. Thoat\n");
}


void importArray(int **array, int *quantity){
    // lay so lg phan tu tu nguowi dung
    printf("Nhap so luong phan tu vao mang: ");
    scanf("%d", quantity);

    if(*quantity <= 0){
        printf("So luong khong hop le ");
        return ;
    }
// cap phat bo nho cho mang
        *array = (int *)malloc(*quantity * sizeof(int));
        if(*array == NULL){
            printf("Bo nho khong du de thuc hien thao tac nay ");
            exit(1) ;// thoat chuong trinh
        }
    // them phan tu vao trong mang
    for(int i = 0; i < *quantity; i++){
        printf("Nhap phan tu array[%d]: ",i);
        scanf("%d", &((*array)[i]));
    }
}

void printArray(int *array, int quantity){
    if(array == NULL || quantity == 0){
        printf("Mang rong ");
        return ;
    }
    printf("Danh sach cac phan tu cua mang la : ");
    for(int i = 0; i < quantity; i++){
        printf("%d ",array[i]);
    }
}
int main(){
    int choice;
    int *array = NULL ;
    int quantityElement = 0;
    do{
        menu();
        printf("1. Vui long nhap lua chon : ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                printf("Nhap vao mang : ");
                importArray(&array, &quantityElement);
                break;
            case 2:
                printArray(array, quantityElement);
                break;
            case 3:
                printf("Them phan tu vao mang : ");
                break;
            case 4:
                printf("Xoa phan tu khoi mang : ");
                break;
            case 5:
                printf("Nhap trong mang : ");
                break;
            case 0:
                printf("Ket thuc chuong tirnh\n");
                break;
}

    }while(choice != 0);

    menu();



    return 0;
}
