/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int result[2];
int* twoSum(int* nums, int n, int target, int* rs) {
    
    * rs = 2;
    for (int i = 0;i<n;i++)
{
    for(int j = i+1;j<n;j++)
    {
        if(nums[i]+nums[j] == target)
        {
            result[0] = i;
            result[1] = j;
            break;
        }
    }
}
return result;
}
    
