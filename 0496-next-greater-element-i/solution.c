/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>

int* nextGreaterElement(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    *returnSize = nums1Size;
    int* ans = (int*)malloc(nums1Size * sizeof(int));

    for (int i = 0; i < nums1Size; i++) {
        ans[i] = -1;
        for (int j = 0; j < nums2Size; j++) {
            if (nums1[i] == nums2[j]) {
                for (int k = j + 1; k < nums2Size; k++) {
                    if (nums2[j] < nums2[k]) {
                        ans[i] = nums2[k];
                        break;
                    }
                }
                break;
            }
        }
    }

    return ans;
}
