#include <iostream>

/**
 * Compile-Time Polymorphism Demonstration:
 *  1. Function Overloading: Multiple `add()` functions differentiated by parameter types.
 *  2. Operator Overloading: Overloading `+` on `ComplexNumber` to add two complex numbers naturally.
 */

// Overloaded function 1: adds two integers
int add(int a, int b) {
    return a + b;
}

// Overloaded function 2: adds two floating-point numbers
double add(double a, double b) {
    return a + b;
}

class ComplexNumber {
private:
    double real_;
    double imag_;

public:
    ComplexNumber(double real = 0.0, double imag = 0.0)
        : real_(real), imag_(imag) {}

    // Overloaded binary `+` operator to add two ComplexNumber objects
    ComplexNumber operator+(const ComplexNumber& other) const {
        return ComplexNumber(real_ + other.real_, imag_ + other.imag_);
    }

    void display() const {
        std::cout << real_ << " + " << imag_ << "i";
    }
};

int main() {
    std::cout << "----- COMPILE TIME POLYMORPHISM -----\n";
    std::cout << "Student Name: Satinderpal Singh Chaney\n";
    std::cout << "Roll Number: E26B00S2034 ";

    // 1. Function Overloading
    std::cout << "----- FUNCTION OVERLOADING -----\n";
    std::cout << "Addition of Integers: " << add(10, 20) << "\n";
    std::cout << "Addition of Decimal Numbers: " << add(10.5, 20.5) << "\n";

    // 2. Operator Overloading
    std::cout << "----- OPERATOR OVERLOADING -----\n";
    ComplexNumber c1(3, 4);
    ComplexNumber c2(5, 6);
    ComplexNumber sum = c1 + c2;

    std::cout << "First Complex Number: ";
    c1.display();
    std::cout << "\n";

    std::cout << "Second Complex Number: ";
    c2.display();
    std::cout << "\n";

    std::cout << "Addition of Complex Numbers:\n";
    sum.display();
    std::cout << "\n";

    std::cout << "Function Overloading Demonstrated!\n";
    std::cout << "Operator Overloading Demonstrated!\n";
    std::cout << "Program executed successfully.\n";

    return 0;
}
