#include <stdio.h>

int main() {
    char buf[100];
    fgets(buf, sizeof(buf), stdin); // Using fgets() to read input safely
    printf("%s", buf); 
    return 0;
}
