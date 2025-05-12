#include <iostream>
using namespace std;

int main() {
    int F;
    cout << "Enter the top floor number (F): ";
    cin >> F;

    int totalRings = 0;
    int totalWaits = 0;
    int timeTaken = 0; 

    for (int floor = 1; floor <= F; floor++) {
        
        timeTaken += 2;

       
        if (floor % 4 == 0 && floor % 7 == 0) {
           
            continue;
        }

        
        if (floor % 2 == 1) {
            totalRings += 1; 
        } else if (floor % 4 == 0) {
            totalRings += 2; 
        } 

       
        if (floor % 7 == 0) {
            totalWaits++;
            timeTaken += 5; 
        }
    }

    cout << "\nTotal Rings: " << totalRings << endl;
    cout << "Total Waits: " << totalWaits << endl;
    cout << "Total Time Taken: " << timeTaken << " seconds" << endl;

    return 0;
}
