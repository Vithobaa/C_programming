// 10 pattern switching
//You are given a binary string, for example:1011001
//Your task is to determine the minimum number of bit flips required so that the substring "10" does not appear anywhere in the string.
// A flip means changing a single bit:
// 1 → 0
// 0 → 1
// Input: 1011001
// Output: 2

#include <stdio.h>
#include <string.h>
int countOffEvents(char s[]) {
    int off = 0;
    int n = strlen(s);

    for (int i = 0; i < n - 1; i++) {
        if (s[i] == '1' && s[i + 1] == '0') {
            off++;
            i++;  // skip next to avoid rechecking same pattern
        }
    }

    return off;
}

int main() {
    char s[100];

    printf("Enter the machine input string (binary): ");
    scanf("%s", s);

    int result = countOffEvents(s);

    printf("changes encountered: %d\n", result);

    return 0;
}
