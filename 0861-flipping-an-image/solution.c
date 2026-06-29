int** flipAndInvertImage(int** image, int imageSize, int* imageColSize,
                         int* returnSize, int** returnColumnSizes)
{
    *returnSize = imageSize;
    *returnColumnSizes = imageColSize;

    for (int i = 0; i < imageSize; i++)
    {
        int low = 0;
        int high = imageColSize[i] - 1;

        while (low < high)
        {
            int temp = image[i][low] ^ 1;
            image[i][low] = image[i][high] ^ 1;
            image[i][high] = temp;

            low++;
            high--;
        }

        // Middle element (odd number of columns)
        if (low == high)
        {
            image[i][low] ^= 1;
        }
    }

    return image;
}
