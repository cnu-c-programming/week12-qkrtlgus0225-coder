#include <stdio.h>

int main(int argc, const char* argv[]) {
    const char* filename = "numbers.txt";

    FILE* fp = fopen(filename, "r");
    if (fp == NULL) {
        return 0;
    }

int sum = 0, val;
char buffer[256];
while (fscanf(fp, "%s", buffer) != EOF) {
    if (sscanf(buffer, "%d", &val) == 1) { 
        sum += val;
    } else { 
        fprintf(stderr, "invalid input %s\n", buffer);
    }
}

    printf("sum: %d\n", sum);
    fclose(fp);
    return 0;
}
