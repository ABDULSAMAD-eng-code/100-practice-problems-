#include <stdio.h>

#define MAX_S 50
#define MAX_SUB 10

void printTranspose(int m[][MAX_SUB], int n, int sub) {
    printf("\n--- Matrix Transpose (Subjects as Rows, Students as Cols) ---\n");
    for (int j = 0; j < sub; j++) {
        printf("Sub %d: ", j + 1);
        for (int i = 0; i < n; i++) {
            printf("%4d ", m[i][j]);
        }
        printf("\n");
    }
}

void printCombinedTests(int t1[][MAX_SUB], int t2[][MAX_SUB], int n, int sub) {
    printf("\n--- Combined Marks (Test 1 + Test 2) ---\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        for (int j = 0; j < sub; j++) {
            printf("%4d ", t1[i][j] + t2[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n, sub;
    int test1[MAX_S][MAX_SUB], test2[MAX_S][MAX_SUB];
    float att[MAX_S];

    printf("Enter number of students (1-%d) and subjects (1-%d): ", MAX_S, MAX_SUB);
    if (scanf("%d %d", &n, &sub) != 2 || n <= 0 || n > MAX_S || sub <= 0 || sub > MAX_SUB) {
        printf("Invalid input. Please enter valid positive counts within limits.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("\nStudent %d - Test 1 marks (%d subjects, out of 100): ", i + 1, sub);
        for (int j = 0; j < sub; j++) {
            scanf("%d", &test1[i][j]);
        }

        printf("Student %d - Test 2 marks (%d subjects, out of 100): ", i + 1, sub);
        for (int j = 0; j < sub; j++) {
            scanf("%d", &test2[i][j]);
        }

        printf("Student %d - Attendance (%%): ", i + 1);
        scanf("%f", &att[i]);
    }

    printf("\n--- Student-Wise Report (Based on Test 1) ---\n");
    for (int i = 0; i < n; i++) {
        int total = 0;
        for (int j = 0; j < sub; j++) {
            total += test1[i][j];
        }
        float avg = (float)total / sub;
        float pct = avg; // each subject is out of 100

        const char *status = (pct >= 40.0) ? "Pass" : "Fail";
        const char *flag = (pct < 40.0 || att[i] < 75.0) ? "Needs Improvement" : "Regular";

        printf("Student %d | Total: %d | Avg/Pct: %.1f%% | Att: %.1f%% | %s | %s\n",
               i + 1, total, pct, att[i], status, flag);
    }

    printf("\n--- Subject-Wise Summary (Based on Test 1) ---\n");
    for (int j = 0; j < sub; j++) {
        int sum = 0, high = test1[0][j], low = test1[0][j];
        for (int i = 0; i < n; i++) {
            sum += test1[i][j];
            if (test1[i][j] > high) high = test1[i][j];
            if (test1[i][j] < low)  low  = test1[i][j];
        }
        printf("Subject %d | Avg: %.1f | Highest: %d | Lowest: %d\n",
               j + 1, (float)sum / n, high, low);
    }

    printTranspose(test1, n, sub);
    printCombinedTests(test1, test2, n, sub);

    return 0;
}
