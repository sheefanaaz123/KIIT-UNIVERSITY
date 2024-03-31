#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Process structure to store process information
struct Process {
    int id; // Process ID
    int arrivalTime;
    int burstTime;
    int completionTime;
    int turnaroundTime;
    int waitingTime;
};

bool compareArrivalTime(const Process& a, const Process& b) {
    if (a.arrivalTime == b.arrivalTime)
        return a.burstTime < b.burstTime;
    return a.arrivalTime < b.arrivalTime;
}

// Function to calculate SJF scheduling for processes
void calculateSJF(vector<Process>& processes) {
    int n = processes.size();

    // Sort processes based on arrival time and burst time
    sort(processes.begin(), processes.end(), compareArrivalTime);

    // Calculate Completion Time (CT)
    int currentTime = 0;
    for (int i = 0; i < n; ++i) {
        if (currentTime < processes[i].arrivalTime) {
            currentTime = processes[i].arrivalTime;
        }
        processes[i].completionTime = currentTime + processes[i].burstTime;
        currentTime = processes[i].completionTime;
    }

    // Calculate Turnaround Time (TAT) and Waiting Time (WT)
    for (int i = 0; i < n; ++i) {
        processes[i].turnaroundTime = processes[i].completionTime - processes[i].arrivalTime;
        processes[i].waitingTime = processes[i].turnaroundTime - processes[i].burstTime;
    }
}

// Function to display the table
void displayTable(const vector<Process>& processes) {
    cout << "Process\tAT\tBT\tCT\tTAT\tWT\n";
    for (const Process& p : processes) {
        cout << "P" << p.id << "\t" << p.arrivalTime << "\t"
             << p.burstTime << "\t" << p.completionTime << "\t"
             << p.turnaroundTime << "\t" << p.waitingTime << "\n";
    }
}

int main() {
    int n;

    cout << "Enter the number of processes: ";
    cin >> n;

    vector<Process> processes(n);

    // Input arrival time and burst time for each process
    cout << "Enter arrival time and burst time for each process:\n";
    for (int i = 0; i < n; ++i) {
        processes[i].id = i + 1; // Assign process ID
        cout << "Process " << processes[i].id << " Arrival Time: ";
        cin >> processes[i].arrivalTime;

        cout << "Process " << processes[i].id << " Burst Time: ";
        cin >> processes[i].burstTime;
    }

    // Calculate SJF scheduling
    calculateSJF(processes);

    // Display the table
    displayTable(processes);

    // Calculate average turnaround time and average waiting time
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
