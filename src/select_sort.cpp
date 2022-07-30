#include "select_sort.h"
#include "comm.h"

void select_sort(int* arr, int n) {
    // 注意是 n-1 趟
    for (int i = 0; i < n - 1; i++) {
        // find min_i
        int min_i = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] <= arr[min_i]) {
                min_i = j;
            }
        }
        if (min_i != i) swap(arr, i, min_i);
    }
}