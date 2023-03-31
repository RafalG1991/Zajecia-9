#include <iostream>

using namespace std;

double dzielenie(double a, double b) {
    if (b == 0) {
        throw logic_error("\n******************************************\n* BLAD!!! Nie mozesz dzielic przez zero! *\n******************************************\n");
    }
    else {
        return a / b;
    }
}

int modulo(int a, int b) {
    if (b == 0) {
        throw logic_error("\n******************************************\n* BLAD!!! Nie mozesz dzielic przez zero! *\n******************************************\n");
    } else if (a == b || (a % b == 0) || (b % a == 0)) {
        throw logic_error("\n*************************************************************************************\n* BLAD!!! Wprowadzone dwie zmienne sa sobie rowne badz sa swoimi wielokrotnosciami! *\n*************************************************************************************\n");
    } else {
        return a % b;
    }
}

int main() {
    double a, b;
    cout << "Podaj liczby do dzielenia" << endl << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
   
    try {
        cout << "Wynik dzielenia to: " << dzielenie(a, b) << endl;
    }
    catch (logic_error& e) {
        cout << e.what();
    }
    cout << endl << "*************************************************************" << endl;
    int c, d;
    cout << "Podaj liczby do operacji modulo" << endl << "c: ";
    cin >> c;
    cout << "d: ";
    cin >> d;

    try {
        cout << "Wynik operacji modulo to: " << modulo(c, d) << endl;
    }
    catch (logic_error& e) {
        cout << e.what();
    }

    return 0;
}