#include "bubble_sort.h"
#include "comm.h"
#include "stdio.h"

void bubble_sort(int arr[], int n) {
    int flag = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // if 前一项元素大于后一项，非法! ---> 交换
            if (arr[j] > arr[j + 1]) {
                swap(arr, j, j + 1);
                flag = 1;
            }
        }
        if (!flag) break;
    }
}