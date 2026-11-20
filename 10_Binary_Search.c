 int search(int* nums, int numsSize, int target) {
    int left = 0;
    int right = numsSize - 1;

    while (left <= right) {
        // Integer overflow se bachne ke liye mid aise nikalte hain
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid; // Target mil gaya
        } else if (nums[mid] < target) {
            left = mid + 1; // Right half mein dhoondhein
        } else {
            right = mid - 1; // Left half mein dhoondhein
        }
    }

    return -1; // Target array mein nahi mila
}
