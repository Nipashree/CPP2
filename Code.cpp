#include <iostream>

class MyClass {
public:
    int publicVar;

    void publicMethod() {
        std::cout << "Public method called\n";
    }

private:
    int privateVar;

    void privateMethod() {
        std::cout << "Private method called\n";
    }

protected:
    int protectedVar;

    void protectedMethod() {
        std::cout << "Protected method called\n";
    }
};

int main() {
    MyClass obj;

    // Accessing public members
    obj.publicVar = 10;
    obj.publicMethod();

    // Accessing private members (not allowed)
    // obj.privateVar = 20;  // Error
    // obj.privateMethod(); // Error

    return 0;
}
