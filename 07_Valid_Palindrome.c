 #include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool isPalindrome(char* s) {
    int left = 0;
    int right = strlen(s) - 1;

    while (left < right) {
        // Non-alphanumeric characters ko left se skip karein
        while (left < right && !isalnum((unsigned char)s[left])) {
            left++;
        }
        // Non-alphanumeric characters ko right se skip karein
        while (left < right && !isalnum((unsigned char)s[right])) {
            right--;
        }

        // Lowercase mein convert karke compare karein
        if (tolower((unsigned char)s[left]) != tolower((unsigned char)s[right])) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}
