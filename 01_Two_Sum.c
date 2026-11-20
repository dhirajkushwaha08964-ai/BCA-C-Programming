 #include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    // 1. 2 integers store karne ke liye dynamic memory allocate karein
    int* result = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;

    // 2. Har pair ko check karein ki unka sum target ke barabar hai ya nahi
    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }

    // 3. Agar koi pair na mile (safety ke liye)
    *returnSize = 0;
    return NULL;
}
