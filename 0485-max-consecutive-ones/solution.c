int findMaxConsecutiveOnes(int* nums, int n) {
    int count = 0;
    int temp = 0;
    for(int i = 0; i<n;i++)
    {
        if(nums[i] == 1) 
        {
            count++;
            if(count > temp)
        {
            temp = count;
        }
        }
        else count = 0;
    }

    return temp;
}
