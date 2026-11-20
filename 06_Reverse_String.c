 void reverseString(char* s, int sSize) {
    int left = 0;
    int right = sSize - 1;

    while (left < right) {
        // Dono characters ko swap karein
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        // Pointers ko beech ki taraf badhayein
        left++;
        right--;
    }
}
