#include <stdio.h>

using namespace std;

int main() {

    int a = 0, b = 2;
    (a = 5) = b;

    printf("a: %d\n", a);

    if (a = 1) {
        printf("a is 1!\n");
    } else {
        printf("a is not 1 :(\n");
    }

    return 0;
}