#include <iostream>
#include <vector>
#include <cstdlib> 

template <typename T>
void createArray(std::vector<T>& arr, int size) {
    arr.clear();
    for (int i = 0; i < size; i++) {
        T num = rand() % 100; 
        arr.push_back(num);
    }
}

template <typename T>
void printArray(const std::vector<T>& arr) {
    for (const T& num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

template <typename T>
T Sum(const std::vector<T>& arr) {
    T sum = 0;
    for (const T& num : arr) {
        sum += num;
    }
    return sum;
}

int main() {
    int size = 10;
    std::vector<int> arr;

    srand(static_cast<unsigned>(time(nullptr)));

    createArray(arr, size);
    std::cout << "masive:" << std::endl;
    printArray(arr);

    int sum = Sum(arr);
    std::cout << "sum masive elements : " << sum << std::endl;

    return 0;
}
