#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Process structure to store process information
struct Process {
    int arrivalTime;
    int burstTime;
    int remainingBurstTime;
    int completionTime;
    int turnaroundTime;
    int waitingTime;
};

// Function to calculate Round Robin scheduling for processes
void calculateRoundRobin(vector<Process>& processes, int timeQuantum) {
    int n = processes.size();
    
    queue<int> processQueue;
    int currentTime = 0;
    int remainingProcesses = n;

    // Initialize the remaining burst time for each process
    for (int i = 0; i < n; ++i) {
        processes[i].remainingBurstTime = processes[i].burstTime;
    }

    // Process until all processes are completed
    while (remainingProcesses > 0) {
        for (int i = 0; i < n; ++i) {
            if (processes[i].arrivalTime <= currentTime && processes[i].remainingBurstTime > 0) {
                // Process the current process for the time quantum or remaining burst time, whichever is smaller
                int executionTime = min(timeQuantum, processes[i].remainingBurstTime);
                processes[i].remainingBurstTime -= executionTime;
                currentTime += executionTime;

                // If the process is completed
                if (processes[i].remainingBurstTime == 0) {
                    processes[i].completionTime = currentTime;
                    processes[i].turnaroundTime = processes[i].completionTime - processes[i].arrivalTime;
                    processes[i].waitingTime = processes[i].turnaroundTime - processes[i].burstTime;
                    --remainingProcesses;
                }

                // Add the process back to the queue if it still has remaining burst time
                if (processes[i].remainingBurstTime > 0) {
                    processQueue.push(i);
                }
            }
        }

        // Move to the next process in the queue
        if (!processQueue.empty()) {
            int frontProcess = processQueue.front();
            processQueue.pop();
            processQueue.push(frontProcess);
        }
        else {
            // If the queue is empty, find the next process that arrives
            for (int i = 0; i < n; ++i) {
                if (processes[i].arrivalTime > currentTime) {
                    currentTime = processes[i].arrivalTime;
                    break;
                }
            }
        }
    }
}

// Function to display the table
void displayTable(const vector<Process>& processes) {
    cout << "Process\tAT\tBT\tCT\tTAT\tWT\n";
    for (const Process& p : processes) {
        cout << "P" << (&p - &processes[0]) + 1 << "\t" << p.arrivalTime << "\t"
             << p.burstTime << "\t" << p.completionTime << "\t" << p.turnaroundTime << "\t" << p.waitingTime << "\n";
    }
}

int main() {
    int n, timeQuantum;

    cout << "Enter the number of processes: ";
    cin >> n;

    cout << "Enter time quantum for Round Robin: ";
    cin >> timeQuantum;

    vector<Process> processes(n);

    // Input arrival time and burst time for each process
    cout << "Enter arrival time and burst time for each process:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Process " << i + 1 << " Arrival Time: ";
        cin >> processes[i].arrivalTime;

        cout << "Process " << i + 1 << " Burst Time: ";
        cin >> processes[i].burstTime;
    }

    // Calculate Round Robin scheduling
    calculateRoundRobin(processes, timeQuantum);

    // Display the table
    displayTable(processes);
    
     double avgTurnaroundTime = 0, avgWaitingTime = 0;
    for (const Process& p : processes) {
        avgTurnaroundTime += p.turnaroundTime;
        avgWaitingTime += p.waitingTime;
    }
    avgTurnaroundTime /= n;
    avgWaitingTime /= n;

    cout << "\nAverage Turnaround Time: " << avgTurnaroundTime << endl;
    cout << "Average Waiting Time: " << avgWaitingTime << endl;

    return 0;
}
