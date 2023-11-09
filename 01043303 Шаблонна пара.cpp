#include <iostream>
#include "шаблон.h"

int main() {
    Pair<int, double> myPair(42, 3.14);

    std::cout << "First value: " << myPair.getFirst() << std::endl;
    std::cout << "Second value: " << myPair.getSecond() << std::endl;

    return 0;
}
