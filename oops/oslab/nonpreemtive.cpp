#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of processes: ";
    cin >> n;

    int at[20], bt[20], pr[20];
    int ct[20], tat[20], wt[20];
    bool done[20] = {false};

    for (int i = 0; i < n; i++) {
        cout << "Enter AT, BT and Priority for P" << i + 1 << ": ";
        cin >> at[i] >> bt[i] >> pr[i];
    }

    int completed = 0, time = 0;

    while (completed < n) {
        int index = -1;
        int highestPriority = 9999;

        // Find highest priority process among arrived processes
        for (int i = 0; i < n; i++) {
            if (!done[i] && at[i] <= time) {
                if (pr[i] < highestPriority) {
                    highestPriority = pr[i];
                    index = i;
                }
            }
        }

        // No process has arrived
        if (index == -1) {
            time++;
            continue;
        }

        // Execute the selected process completely
        time += bt[index];

        ct[index] = time;
        tat[index] = ct[index] - at[index];
        wt[index] = tat[index] - bt[index];

        done[index] = true;
        completed++;
    }

    cout << "\nP\tAT\tBT\tPR\tCT\tTAT\tWT\n";

    float avgWT = 0, avgTAT = 0;

    for (int i = 0; i < n; i++) {
        cout << "P" << i + 1 << "\t"
             << at[i] << "\t"
             << bt[i] << "\t"
             << pr[i] << "\t"
             << ct[i] << "\t"
             << tat[i] << "\t"
             << wt[i] << endl;

        avgWT += wt[i];
        avgTAT += tat[i];
    }

    cout << "\nAverage Waiting Time = " << avgWT / n;
    cout << "\nAverage Turnaround Time = " << avgTAT / n;

    return 0;
}