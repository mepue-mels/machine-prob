#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Reservation {
private:
    bool reservationMatrix[9][6];
    string dayMatrix[6] = {
        "Monday", "Tuesday",
        "Wednesday", "Thursday",
        "Friday", "Saturday",
    };
    string windowMatrix[9] = {
        "7:30AM-9:00AM", "9:00AM-10:30AM",
        "10:30AM-12:00NN", "12:00NN-1:30PM",
        "1:30PM-3:00PM", "3:00PM-4:30PM",
        "4:30PM-6:00PM", "6:00PM - 7:30PM",
        "7:30PM - 9:00PM"
    };

public:
    void fetchMatrix(ifstream& inFile) { 
        for (int i = 0; i < 9; i++) { 
            for (int j = 0; j < 6; j++) {
                inFile >> reservationMatrix[i][j];               
            }
        }
    }
    void outputMatrix(ofstream& outFile) { 
        for (int i = 0; i < 9; i++) { 
            for (int j = 0; j < 6; j++) {
                outFile << reservationMatrix[i][j] << " ";
            }
            outFile << endl;
        }
    }
    void changeMatrixEntry(int a, int b, bool inp) {
        reservationMatrix[a][b] = inp; 
    }

};

int main(void) {
    Reservation sample;
}