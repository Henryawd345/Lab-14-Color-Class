#include <iostream>
#include <iomanip>

using namespace std;


class Color{
private:
    int redv;
    int greenv;
    int bluev;
    string name;
public:
    string getcolorName() {return name;}
    int getRedv() {return redv;}
    int getGreenv() {return greenv;}
    int getBluev() {return bluev;}
    void setcolorName(string N) {name = N;}
    void setRedv(int r) {redv = r;}
    void setGreenv(int g) {greenv = g;}
    void setBluev(int b) {bluev = b;}

    void print() {
        cout << setw(15) << "Red Value: " << redv << endl;
        cout << setw(15) << "Green Value: " << greenv << endl;
        cout << setw(15) << "Blue Value: " << bluev << endl;
    }
};

void print(Color);

int main() {
    cout << fixed << setprecision(2);
    Color RedCl;
    RedCl.setcolorName("Red");
    RedCl.setRedv(255);
    RedCl.setGreenv(0);
    RedCl.setBluev(0);
    print(RedCl);

    Color GreenCl;
    GreenCl.setcolorName("Green");
    GreenCl.setRedv(0);
    GreenCl.setGreenv(255);
    GreenCl.setBluev(0);
    print(GreenCl);

    Color BlueCl;
    BlueCl.setcolorName("Blue");
    BlueCl.setRedv(0);
    BlueCl.setGreenv(0);
    BlueCl.setBluev(255);
    print(BlueCl);

    return 0;
}

void print(Color c){
    cout << c.getcolorName()<< " RGB value: " << c.getRedv() << " " << c.getGreenv() << " " << c.getBluev() << " " << endl;
}