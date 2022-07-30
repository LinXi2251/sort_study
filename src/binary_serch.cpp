#include "binary_serch.h"
/**
 * @brief 折半查找前提是数组有序
 * 
 * @param arr 
 * @param left 折半查找的左边界
 * @param right 折半查找的右边界
 * @param key 
 * @return int 
 */
int binary_serch(int *arr, int left, int right, int key) {
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}