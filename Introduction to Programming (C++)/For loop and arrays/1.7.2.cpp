#include <iostream>
#include <vector>

int main() {
    int n(0);
    std::cin >> n;
    std::vector <int> vect(n);
    for (int i = 0; i < n; i++) {
        std::cin >> vect[i];
    }
    for (int i = 0; i < n; i++) {
        if (vect[i] % 2 == 0) {
            std::cout << vect[i] << " ";
        }
    }
}
