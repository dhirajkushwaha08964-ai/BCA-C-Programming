 void moveZeroes(int* nums, int numsSize) {
    int insertPos = 0;

    // Saare non-zero elements ko aage shift karein
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[insertPos] = nums[i];
            insertPos++;
        }
    }

    // Bachi hui jagah par 0 fill karein
    while (insertPos < numsSize) {
        nums[insertPos] = 0;
        insertPos++;
    }
}

