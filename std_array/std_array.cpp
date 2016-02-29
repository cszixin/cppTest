// std_array.cpp
// copyright
// author
#include <iostream>
#include <array>
using  std::array;
using  std::cout;
using  std::cin;
using  std::endl;

int main() {
    array<int, 3> arr = {9, 8, 7};
    cout << "Array size = " << arr.size() << endl;
    for (auto i : arr) {
      cout << i << endl;
    }
    return 0;
}
