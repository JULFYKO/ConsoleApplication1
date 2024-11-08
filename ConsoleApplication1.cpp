#include <iostream>
using namespace std;

class Fraction {
private:
    int verh;
    int niz;

public:
    Fraction(int verhN = 0, int nizN = 1) : verh(verhN), niz(nizN) {
        {
            if (nizN == 0) cout << "no /0 only m/n";
        }

    }
    Fraction operator+(const Fraction& other) const {
        int num = verh * other.niz + other.verh * niz;
        int denom = niz * other.niz;
        return Fraction(num, denom);
    }
    Fraction operator-(const Fraction& other) const {
        int num = verh * other.niz - other.verh * niz;
        int denom = niz * other.niz;
        return Fraction(num, denom);
    }
    Fraction operator*(const Fraction& other) const {
        int num = verh * other.verh;
        int denom = niz * other.niz;
        return Fraction(num, denom);
    }
    Fraction operator/(const Fraction& other) const {
        if (other.verh == 0) throw invalid_argument("no /0 only m/n");
        int num = verh * other.niz;
        int denom = niz * other.verh;
        return Fraction(num, denom);
    }
    void display() const {
        cout << verh << "/" << niz << endl;
    }
};

int main() {
    Fraction f1(3, 4);
    Fraction f2(2, 5);
    Fraction result;

    result = f1 + f2;
    cout << "f1 + f2 = ";
    result.display();

    result = f1 - f2;
    cout << "f1 - f2 = ";
    result.display();

    result = f1 * f2;
    cout << "f1 * f2 = ";
    result.display();

    result = f1 / f2;
    cout << "f1 / f2 = ";
    result.display();

    return 0;
}
