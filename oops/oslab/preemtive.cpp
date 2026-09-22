#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of processes: ";
    cin >> n;

    int at[20], bt[20], rt[20], pr[20];
    int ct[20], tat[20], wt[20];

    for (int i = 0; i < n; i++) {
        cout << "Enter AT, BT and Priority for P" << i + 1 << ": ";
        cin >> at[i] >> bt[i] >> pr[i];
        rt[i] = bt[i];
    }

    int completed = 0, time = 0;

    while (completed < n) {
        int index = -1;
        int highest = 9999;

        // Find process with highest priority
        for (int i = 0; i < n; i++) {
            if (at[i] <= time && rt[i] > 0) {
                if (pr[i] < highest) {
                    highest = pr[i];
                    index = i;
                }
            }
        }

        // If no process has arrived
        if (index == -1) {
            time++;
            continue;
        }

        // Execute for 1 unit (preemption possible)
        rt[index]--;
        time++;

        // Process completed
        if (rt[index] == 0) {
            ct[index] = time;
            completed++;
        }
    }

    float avgWT = 0, avgTAT = 0;

    cout << "\nP\tAT\tBT\tPR\tCT\tTAT\tWT\n";

    for (int i = 0; i < n; i++) {
        tat[i] = ct[i] - at[i];
        wt[i] = tat[i] - bt[i];

        avgWT += wt[i];
        avgTAT += tat[i];

        cout << "P" << i + 1 << "\t"
             << at[i] << "\t"
             << bt[i] << "\t"
             << pr[i] << "\t"
             << ct[i] << "\t"
             << tat[i] << "\t"
             << wt[i] << endl;
    }

    cout << "\nAverage Waiting Time = " << avgWT / n;
    cout << "\nAverage Turnaround Time = " << avgTAT / n;

    return 0;
}