#include <iostream>

constexpr int N_ELEMENTS = 100;

int main() {
    int* b = new int[N_ELEMENTS];
    std::cout << "1-100 ertekek duplazasa";
    for (int i = 0; i < N_ELEMENTS; i++) {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) {
        std::cout << "Ertek:";
    }
    std::cout << "\nAtlag szamitasa: " << std::endl;
    int atlag = 0;
    for (int i = 0; i < N_ELEMENTS; i++) {
        atlag += b[i];
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    std::cout << "karalabe alma";
    delete[] b;
    return 0;
}