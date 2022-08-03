#include "quick_sort.h"
int paration(int* arr, int low, int high) {
    int p = arr[low];
    
    while (low < high) {
        while (low < high && arr[high] >= p)
            --high;
        arr[low] = arr[high];
        while (low < high && arr[low] <= p)
            ++low;
        arr[high] = arr[low];
    }
    arr[low] = p;
    return low;
}
void quick_sort(int* arr, int low, int high) {
    if (low < high) {
        int p = paration(arr, low, high);
        quick_sort(arr, low, p - 1);
        quick_sort(arr, p + 1, high);
    }
}
