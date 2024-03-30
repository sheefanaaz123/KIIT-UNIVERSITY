#include <iostream>
#include <vector>

using namespace std;

// Process structure to store process information
struct Process {
    int arrivalTime;
    int burstTime;
    int completionTime;
    int turnaroundTime;
    int waitingTime;
};

// Function to calculate FCFS scheduling for processes
void calculateFCFS(vector<Process>& processes) {
    int n = processes.size();
    
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
    for (int i = 0; i < processes.size(); ++i) {
        cout << "P" << i + 1 << "\t" << processes[i].arrivalTime << "\t"
             << processes[i].burstTime << "\t" << processes[i].completionTime << "\t"
             << processes[i].turnaroundTime << "\t" << processes[i].waitingTime << "\n";
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
        cout << "Process " << i + 1 << " Arrival Time: ";
        cin >> processes[i].arrivalTime;

        cout << "Process " << i + 1 << " Burst Time: ";
        cin >> processes[i].burstTime;
    }

    // Calculate FCFS scheduling
    calculateFCFS(processes);

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
