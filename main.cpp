#include <iostream>
#include <iomanip>

using namespace std;


class Color{
private:
    int redv;
    int greenv;
    int bluev;
public:
    int getRedv() {return redv;}
    int getGreenv() {return greenv;}
    int getBluev() {return bluev;}
    void setRedv(int r) {redv = r;}
    void setGreenv(int g) {greenv = g;}
    void setBluev(int b) {bluev = b;}

    void print() {
        cout << setw(15) << "Red Value: " << redv << endl;
        cout << setw(15) << "Green Value: " << greenv << endl;
        cout << setw(15) << "Blue Value: " << bluev << endl;
    }

};