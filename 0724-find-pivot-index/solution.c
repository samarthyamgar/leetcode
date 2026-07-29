int pivotIndex(int* nums, int n)
{
    int i,j,k;
    for(i =0;i<n;i++)
    {
    int left_sum = 0;
    int right_sum = 0;
        for(j = i + 1;j<n;j++)
        {
            right_sum += nums[j];
        }
        for(k = 0;k<i;k++)
        {
            left_sum += nums[k];
        }

        if(left_sum == right_sum) return i;
    }

    return -1;
}
