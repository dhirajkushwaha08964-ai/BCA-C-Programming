 int removeDuplicates(int* nums, int numsSize) {
    // Agar array khali hai toh 0 return karein
    if (numsSize == 0) {
        return 0;
    }

    // 'i' unique elements ki position track karega (Slow Pointer)
    int i = 0;

    // 'j' poore array ko scan karega (Fast Pointer)
    for (int j = 1; j < numsSize; j++) {
        // Jab bhi koi naya unique element mile
        if (nums[j] != nums[i]) {
            i++;               // Agli unique position par jayein
            nums[i] = nums[j]; // Naye unique element ko wahan rakhein
        }
    }
