/*Container Exchange Problem (array-string input)
You are given a single input string containing multiple sets of values.
Each set has the format:
A,B,C
Where:
A = total units of liquid
B = units required to fill 1 container
C = number of empty containers required to exchange for 1 new full container
You must determine how many containers you actually end up using for each set.
This includes:
all containers you filled initially
all containers obtained by exchanging empty containers
Input example
10,5,3 6,2,2 8,4,5
This means 3 separate test cases:
A=10, B=5, C=3
A=6, B=2, C=2
A=8, B=4, C=5
For each test case, compute how many total containers you “played with” (used).
Output example
2
5
2
Each output line corresponds to each input set.*/




#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char input[200];

    printf("Enter all values (example: 10,5,3 6,2,2 8,4,5):\n");
    fgets(input, sizeof(input), stdin);

    // Split the entire input by spaces → "10,5,3" "6,2,2" "8,4,5"
    char *token = strtok(input, " ");

    while (token != NULL) {

        int A, B, C;

        /*
            Parse each triple like "10,5,3"
            sscanf() extracts A, B, C
        */
        sscanf(token, "%d,%d,%d", &A, &B, &C);

        int full = A / B;      // initial full containers
        int empty = 0;
        int total_used = 0;

        while (full > 0) {
            total_used += full;   // count used full containers
            empty += full;        // used ones become empty
            full = 0;

            if (empty >= C) {
                full = empty / C; // get new full containers
                empty = empty % C;
            }
        }

        printf("%d\n", total_used);

        // move to the next group
        token = strtok(NULL, " ");
    }

    return 0;
}
