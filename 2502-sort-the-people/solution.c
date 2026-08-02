/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** sortPeople(char** names, int ns, int* heights, int hs, int* returnSize) {
    for(int i = 0;i<hs;i++)
    {
        int temp;
        char *demo;
        for(int j = 0;j<hs-i-1;j++)
        {
            if(heights[j]<heights[j+1])
            {
                temp = heights[j];
                heights[j] = heights[j+1];
                heights[j+1] = temp;

                demo = names[j];
                names[j] = names[j + 1];
                names[j + 1] = demo;
            }
        }
    }

    *returnSize = ns;
    return names;
}
