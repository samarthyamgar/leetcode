#include <stdlib.h>

int* intersection(int* nums1, int nums1Size,
                  int* nums2, int nums2Size,
                  int* returnSize)
{
    int *result = (int *)malloc(sizeof(int) * (nums1Size < nums2Size ? nums1Size : nums2Size));

    int count = 0;

    for(int i = 0; i < nums1Size; i++)
    {
        // Check if nums1[i] exists in nums2
        int found = 0;

        for(int j = 0; j < nums2Size; j++)
        {
            if(nums1[i] == nums2[j])
            {
                found = 1;
                break;
            }
        }

        if(found)
        {
            // Check if already present in result
            int duplicate = 0;

            for(int k = 0; k < count; k++)
            {
                if(result[k] == nums1[i])
                {
                    duplicate = 1;
                    break;
                }
            }

            if(!duplicate)
            {
                result[count] = nums1[i];
                count++;
            }
        }
    }

    *returnSize = count;
    return result;
}
