#include "merge_sort.h"
#include "comm.h"
#include "stdio.h"
int B[100];
/**
 * @brief 合并两个有序数组
 * @param arr
 * @param left 左边数组的下限
 * @param mid 将一个数组分为两个的分界点
 * @param right 右边数组的上限
 */
void merge(int* arr, int left, int mid, int right) {
    for (int i = left; i <= right; i++) {
        B[i] = arr[i];
    }
    int i = left, j = mid + 1, k = i;
    for (; i <= mid && j <= right; k++) {
        if (B[i] < B[j]) {
            arr[k] = B[i++];
        } else {
            arr[k] = B[j++];
        }
    }
    while (i <= mid) {
        arr[k++] = B[i++];
    }
    while (j <= right) {
        arr[k++] = B[j++];
    }
}

void merge_sort(int* arr, int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;
        merge_sort(arr, left, mid);
        merge_sort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}