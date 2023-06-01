#include <stdio.h>
#include <stdbool.h>

bool isVowel(char ch) {
    ch = toupper(ch);
    return (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'Y');
}

bool isValidTag(char tag[]) {
    // Check the conditions for a valid tag
    if (!isVowel(tag[2]) && (tag[0] + tag[1]) % 2 == 0 && (tag[3] + tag[4]) % 2 == 0 && (tag[4] + tag[5]) % 2 == 0 &&
        (tag[7] + tag[8]) % 2 == 0)
    {
        return true;
    }
    return false;
}

int main() {
    char tag[10];
    scanf("%s", tag);

    if (isValidTag(tag)) {
        printf("valid\n");
    } else {
        printf("invalid\n");
    }

    return 0;
}
