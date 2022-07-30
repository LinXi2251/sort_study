#include "heap_sort.h"
#include "comm.h"
/**树的数组表示
 * parant = (i - 1) / 2
 * left    = 2*i + 1
 * right   = 2*i + 2
 */

/**
 * @brief 调整堆(递归函数)
 *
 * @param arr
 * @param n 树的节点数
 * @param i 当前结点下标
 */
void heapfiy(int tree[], int n, int i) {
    // 递归出口
    if (i >= n) return;
    // 表示两个子节点
    int c1 = 2 * i + 1;
    int c2 = 2 * i + 2;
    // 求解最大的值
    int max = i;

    if (c1 < n && tree[c1] > tree[max]) {
        max = c1;
    }
    if (c2 < n && tree[c2] > tree[max]) {
        max = c2;
    }
    // 与根节点交换
    if (max != i) {
        swap(tree, max, i);
        // 前提是堆的下方是已将调整好的堆 
        heapfiy(tree, n, max);
    }
}
/**
 * @brief 建堆
 *
 * @param tree
 * @param n
 */
void build_heap(int tree[], int n) {
    int last_node = n - 1;
    // 求出最后一个结点的父节点
    int parent = (last_node - 1) / 2;
    // 递减的对结点进行heapfiy操作
    for (int i = parent; i >= 0; i--) {
        heapfiy(tree, n, i);
    }
}
/**
 * @brief 堆排序
 *
 * @param arr
 * @param n
 */
void heap_sort(int arr[], int n) {
    build_heap(arr, n);
    for (int i = n - 1; i >= 0; i--) {
        swap(arr, i, 0);
        heapfiy(arr, i, 0);
    }
}