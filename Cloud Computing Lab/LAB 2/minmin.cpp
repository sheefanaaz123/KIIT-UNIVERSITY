#include <iostream>
#include <limits.h>

int main() {
    int nT, nM; // number of tasks, number of machines
    std::cout << "\nEnter number of machines and tasks\n";
    std::cin >> nM >> nT;

    /*
    Declare a 2d-array of size nM x nT
    Data should be in the following format:

    T1 T2 T3
    M1 | 140 | 20 | 60 |
    M2 | 100 | 100 | 70 |
    */

    int minMin[nM][nT];
    int tmp[nM][nT];
    int makespan = 0;
    std::cout << "\nFill Data\n";
    for (int i = 0; i < nM; i++)
        for (int j = 0; j < nT; j++) {
            std::cin >> minMin[i][j];
            tmp[i][j] = minMin[i][j];
        }

    // Visualize data
    std::cout << "\nOriginal Data\n";
    for (int i = 0; i < nM; i++) {
        for (int j = 0; j < nT; j++)
            std::cout << minMin[i][j] << " ";
        std::cout << "\n";
    }

    // This array will hold the answer
    int resultTask[nT];
    int resultMachine[nT];
    int resultTime[nT];
    int ptr = -1; // Indicates if the result set is full or not

    while (ptr < nT - 1) {
        int time[nT], machine[nT]; // stores minimum time w.r.t machine of each task
        for (int j = 0; j < nT; j++) {
            int minimum = INT_MAX;
            int pos = -1;
            for (int i = 0; i < nM; i++) {
                if (minMin[i][j] < minimum) {
                    minimum = minMin[i][j];
                    pos = i;
                }
            }
            time[j] = minimum;
            machine[j] = pos;
        }

        // Now we find the task with minimum time
        int minimum = INT_MAX;
        int pos = -1;

        for (int j = 0; j < nT; j++) {
            if (time[j] < minimum) {
                minimum = time[j];
                pos = j;
            }
        }

        resultTask[++ptr] = pos;
        resultMachine[ptr] = machine[pos];
        resultTime[ptr] = tmp[machine[pos]][pos];
        if (minimum > makespan)
            makespan = minimum;

        // Resetting states
        for (int i = 0; i < nM; i++) {
            for (int j = 0; j < nT; j++) {
                if (j == resultTask[ptr])
                    minMin[i][j] = INT_MAX;
                else if (i == resultMachine[ptr] && minMin[i][j] != INT_MAX)
                    minMin[i][j] += minimum;
                else
                    continue;
            }
        }
    }

    // Printing the answer
    std::cout << "\nScheduled Tasks are:\n";
    for (int i = 0; i < nT; i++) {
        std::cout << "\nTask " << resultTask[i] + 1 << " Runs on Machine " << resultMachine[i] + 1
                  << " with Time " << resultTime[i] << " units\n";
    }

    std::cout << "\nMakespan : " << makespan << " units\n";
    return 0;
}
