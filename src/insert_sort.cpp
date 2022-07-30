#include "insert_sort.h"
#include "binary_serch.h"
void insert_sort(int* arr, int n) {
    // 依次将A[1]-A[n]插入到前面已排好的序列
    for (int i = 1; i < n; i++) {
        int tmp = arr[i];
        // 如果tmp小于前面的元素，说明得往前插
        if (arr[i - 1] > tmp) {
            int j;
            for (j = i; j >= 0 && arr[j - 1] > tmp; j--) {
                arr[j] = arr[j - 1];
            }
            // arr[j - 1] 如果小于tmp 跳出, 插入位置为 j
            arr[j] = tmp;
        }
    }
}

void insert_sort_binary(int* arr, int n) {
    // 依次将A[1]-A[n]插入到前面已排好的序列
    for (int i = 1; i < n; i++) {
        int tmp = arr[i];
        // 如果tmp小于前面的元素，说明得往前插
        if (arr[i - 1] > tmp) {
            int left = 0, right = i - 1;  // 限定二分查找的边界
            while (left <= right) {
                int mid = (left + right) / 2;
                if (arr[mid] > tmp) {  // 关键字插入点在左区间
                    right = mid - 1;
                } else {
                    left = mid + 1;  // 关键字插入点在右区间
                }
            }
            // 退出的插入位置为 left; 因为需要将元素向后移动
            for (int j = i; j > left; j--) {
                arr[j] = arr[j - 1];
            }
            arr[left] = tmp;
        }
    }
}