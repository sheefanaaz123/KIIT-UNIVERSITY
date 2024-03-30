
#include <iostream>
#include <climits>

int main() {
    int nT, nM; // number of tasks, number of machines
    std::cout << "Enter number of machines and tasks\n";
    std::cin >> nM >> nT;

    /*
    Declare a 2D array of size nM x nT
    Data should be in the following format :

    T1 T2 T3
    M1 | 140 | 20 | 60 |
    M2 | 100 | 100 | 70 |
    */
    int maxMin[nM][nT];
    int tmp[nM][nT];
    int makespan = 0;
    std::cout << "Fill Data\n";
    for (int i = 0; i < nM; i++)
        for (int j = 0; j < nT; j++) {
            std::cin >> maxMin[i][j];
            tmp[i][j] = maxMin[i][j];
        }

    // Visualize data
    std::cout << "Original Data\n";
    for (int i = 0; i < nM; i++) {
        for (int j = 0; j < nT; j++)
            std::cout << maxMin[i][j] << " ";
        std::cout << std::endl;
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
                if (maxMin[i][j] < minimum) {
                    minimum = maxMin[i][j];
                    pos = i;
                }
            }
            time[j] = minimum;
            machine[j] = pos;
        }

        // Now we find the task with the maximum time
        int maximum = INT_MIN;
        int pos = -1;

        for (int j = 0; j < nT; j++) {
            if (time[j] > maximum && time[j] != INT_MAX) {
                maximum = time[j];
                pos = j;
            }
        }

        resultTask[++ptr] = pos;
        resultMachine[ptr] = machine[pos];
        resultTime[ptr] = tmp[machine[pos]][pos];
        if (maximum > makespan)
            makespan = maximum;

        // resetting states
        for (int i = 0; i < nM; i++) {
            for (int j = 0; j < nT; j++) {
                if (j == resultTask[ptr])
                    maxMin[i][j] = INT_MAX;
                else if (i == resultMachine[ptr] && maxMin[i][j] != INT_MAX)
                    maxMin[i][j] += maximum;
                else
                    continue;
            }
        }
    }

    // printing answer
    std::cout << "\nScheduled Tasks are:\n";
    for (int i = 0; i < nT; i++) {
        std::cout << "\nTask " << resultTask[i] + 1 << " Runs on Machine " << resultMachine[i] + 1 << " with Time " << resultTime[i] << " units\n";
    }

    std::cout << "\nTotal elapsed time: " << makespan << " units\n";
    return 0;
}
