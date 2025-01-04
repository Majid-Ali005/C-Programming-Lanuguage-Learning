#include <stdio.h>

int main() {
    // Manually printing each row of the right-aligned half pyramid
    printf("    *\n");      // Row 1: 4 spaces + 1 star
    printf("   **\n");      // Row 2: 3 spaces + 2 stars
    printf("  ****\n");     // Row 3: 2 spaces + 4 stars
    printf(" *****\n");      // Row 4: 1 space + 5 stars

    return 0;
}
