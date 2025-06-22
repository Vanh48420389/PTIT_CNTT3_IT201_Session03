#include <stdio.h>
#include <stdlib.h>

int HamTrungBinhCongSoChan(int *arr, int n)
{
    int sum = 0;
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sum += arr[i];
            count++;
        }
    }

    if (count != 0)
    {
        return sum / count;
    }else
    {
        return 0;
    }
}

int main()
{
    int n;
    int *arr;

    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);

    arr = (int*)malloc(sizeof(int) * n);
    if(arr == NULL)
    {
        printf("Khong the cap phat bo nho.\n");
        return 1;
    }

    for(int i = 0; i < n; i++)
    {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Mang ban dau la: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    int result = HamTrungBinhCongSoChan(arr, n);
    printf("Trung binh cong cac so chan trong mang la: %d\n", result);

    free(arr);
    return 0;
}
