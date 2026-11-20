int removeDuplicates(int* nums, int numsSize) {
    // Agar array khali hai toh 0 return karein
    if (numsSize == 0) {
        return 0;
    }

    // 'i' unique elements ki position track karega (Slow Pointer)
    int i = 0;
