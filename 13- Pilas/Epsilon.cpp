#include <iostream>
using namespace std;

int main() {
    float epsilon_float = 1.0f;
    
    while (1.0f + epsilon_float / 2.0f != 1.0f) {
        epsilon_float /= 2.0f;
    }

    double epsilon_double = 1.0;
    
    while (1.0 + epsilon_double / 2.0 != 1.0) {
        epsilon_double /= 2.0;
    }

    cout << "Epsilon para float: " << epsilon_float << endl;
    cout << "Epsilon para double: " << epsilon_double << endl;

    return 0;
}
