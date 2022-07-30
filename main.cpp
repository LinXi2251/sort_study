#include "iostream"
using namespace std;
#include "comm.h"
#include "bubble_sort.h"
#include "quick_sort.h"
#include "heap_sort.h"
#define MAXSIZE 5
int main() {
    int arr[] = {2, 4, 1, 3, 5, 0, 2, 3, 7, 8};
    // int arr[] = {2, 5, 3, 1, 10, 4};
    // 0,1,2,2,3,3,4,5,7,8
    int n = sizeof(arr) / sizeof(int);
    display(arr, n);
    // quick_sort(arr, 0, n - 1);
    heap_sort(arr, n);
    display(arr, n);
    return 0;
}