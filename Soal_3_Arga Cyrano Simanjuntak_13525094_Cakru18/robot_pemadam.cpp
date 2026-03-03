#include <iostream>
#include <string>

using namespace std;

class RobotPemadam {
private:
    int jarak;
    string status;

public:
  
    void inputSensor(int input) {
        jarak = input;
    }

   
    void prosesLogika() {
        if (jarak > 20) {
            status = "Maju Mencari Api";
        } 
        else if (jarak <= 20 && jarak > 5) {
            status = "UDAH DEKET NIH BRAY";
        } 
        else if (jarak <= 5) {
            status = "Posisi Tepat! gas semprot kali ya!";
        }
    }


    void cetakStatus() {
        cout << "[Sensor: " << jarak << " cm] -> Action: [" << status << "]" << endl;
    }
};

int main() {
    RobotPemadam myRobot;
    int inputUser;

    while (true) {
        cout << "Masukkan jarak rintangan: " << endl;
        cin >> inputUser;

        if (inputUser == 67) {
            cout << "Program berhenti" << endl;
            break;
        }

        myRobot.inputSensor(inputUser);
        myRobot.prosesLogika();
        myRobot.cetakStatus();
    }

    return 0;
}