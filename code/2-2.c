#include <stdio.h>
#include <string.h>

typedef struct student {
    char name[64];
    int score;
} Student;

int main(int argc, const char* argv[]) {
    FILE* fp = fopen("student.txt", "r");
    int count = 0;
    Student students[64];

    int sum = 0;
    while (fscanf(fp, "%s %d", students[count].name, &students[count].score) != EOF) {
        if (students[count].score > max) max = students[count].score;
        sum += students[count].score;
        count++;
}



    int max = 0;
    float avg = 0;

    float avg = count > 0 ? (float)sum / count : 0;



    printf("max: %d\n", max);
    printf("avg: %.2f\n", avg);

    fclose(fp);

    return 0;
}

