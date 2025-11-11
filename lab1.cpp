#include <iostream>
#include <cstdlib>
using namespace std;

class Rational {
private:
    int num, den; // чисельник і знаменник

    int gcd(int a, int b) const {
        return b == 0 ? abs(a) : gcd(b, a % b);
    }

    void reduce() {
        int g = gcd(num, den);
        if (g != 0) {
            num /= g;
            den /= g;
        }
        correct();
    }

    void correct() {
        if (den < 0) {
            den = -den;
            num = -num;
        }
    }

public:
    // Конструктори
    Rational() : num(0), den(1) {}
    Rational(int n) : num(n), den(1) {}
    Rational(int n, int d) : num(n), den(d) { reduce(); }

    // Деструктор
    ~Rational() {}

    // Методи
    void assign(int n, int d) {
        num = n;
        den = d;
        reduce();
    }

    void print() const {
        if (den == 1) cout << num;
        else cout << num << "/" << den;
    }

    Rational add(const Rational &opd) const {
        return Rational(num * opd.den + opd.num * den, den * opd.den);
    }

    Rational sub(const Rational &opd) const {
        return Rational(num * opd.den - opd.num * den, den * opd.den);
    }

    Rational mul(const Rational &opd) const {
        return Rational(num * opd.num, den * opd.den);
    }

    Rational div(const Rational &opd) const {
        return Rational(num * opd.den, den * opd.num);
    }
};

int main() {
    int a, b, c, d, e, f;
    cout << "Введіть коефіцієнти a, b, c, d, e, f: ";
    cin >> a >> b >> c >> d >> e >> f;

    Rational A(a), B(b), C(c), D(d), E(e), F(f);

    Rational det = A.mul(E).sub(D.mul(B)); // a*e - d*b
    Rational x = (C.mul(E).sub(B.mul(F))).div(det); // (c*e - b*f)/det
    Rational y = (A.mul(F).sub(D.mul(C))).div(det); // (a*f - d*c)/det

    cout << "Розв'язок системи:" << endl;
    cout << "x = "; x.print(); cout << endl;
    cout << "y = "; y.print(); cout << endl;

    return 0;
}