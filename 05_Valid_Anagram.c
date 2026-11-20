 #include <stdbool.h>
#include <string.h>

bool isAnagram(char* s, char* t) {
    // Agar dono strings ki length alag hai, toh anagram nahi ho sakte
    if (strlen(s) != strlen(t)) {
        return false;
    }

    int count[26] = {0};

    // Ek hi loop mein s ke letters badhayein aur t ke ghatayein
    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    // Agar saare counts 0 hain, toh dono strings anagram hain
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    return true;
}
