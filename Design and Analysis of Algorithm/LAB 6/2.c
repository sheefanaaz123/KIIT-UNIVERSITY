#include <stdio.h>

#define MAX_ACTIVITIES 100

typedef struct {
    int start;
    int finish;
} Activity;

void swap(Activity* a, Activity* b) {
    Activity temp = *a;
    *a = *b;
    *b = temp;
}

void sort_activities(Activity activities[], int n) {
    // Sort activities in increasing order of finish time
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (activities[j].finish > activities[j+1].finish) {
                swap(&activities[j], &activities[j+1]);
            }
        }
    }
}

void select_activities(Activity activities[], int n) {
    sort_activities(activities, n);

    int last_finish_time = -1;
    printf("Selected activities: ");
    for (int i = 0; i < n; i++) {
        if (activities[i].start >= last_finish_time) {
            printf("%d ", i);
            last_finish_time = activities[i].finish;
        }
    }
    printf("\n");
}

int main() {
    Activity activities[MAX_ACTIVITIES];
    int n;

    printf("Enter the number of activities: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter start and finish times of activity %d: ", i + 1);
        scanf("%d %d", &activities[i].start, &activities[i].finish);
    }

    select_activities(activities, n);

    return 0;
}
