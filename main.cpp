Ось приклад базового коду для обробки даних на C++:

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

// Function to print vector
void print(std::vector<int> &v) {
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
}

// Function to add numbers
void addNumbers(std::vector<int> &v, int num) {
    for (int i = 0; i < v.size(); i++) {
        v[i] += num;
    }
}

// Function to multiply numbers
void multiplyNumbers(std::vector<int> &v, int num) {
    for (int i = 0; i < v.size(); i++) {
        v[i] *= num;
    }
}

// Function to find the average of numbers
double findAverage(std::vector<int> &v) {
    return accumulate(v.begin(), v.end(), 0) / v.size();
}

// Function to find the maximum number
int findMax(std::vector<int> &v) {
    return *max_element(v.begin(), v.end());
}

// Function to find the minimum number
int findMin(std::vector<int> &v) {
    return *min_element(v.begin(), v.end());
}

// Function to sort the numbers
void sortNumbers(std::vector<int> &v) {
    sort(v.begin(), v.end());
}

int main() {
    std::vector<int> numbers = {5, 2, 7, 3, 8, 1, 6, 4};

    std::cout << "Original vector: ";
    print(numbers);

    addNumbers(numbers, 5);
    std::cout << "After adding 5 to each number: ";
    print(numbers);

    multiplyNumbers(numbers, 2);
    std::cout << "After multiplying each number by 2: ";
    print(numbers);

    std::cout << "Average of numbers: " << findAverage(numbers) << std::endl;

    std::cout << "Maximum number: " << findMax(numbers) << std::endl;

    std::cout << "Minimum number: " << findMin(numbers) << std::endl;

    sortNumbers(numbers);
    std::cout << "After sorting: ";
    print(numbers);

    return 0;
}
```

Цей код створює вектор чисел, додає число до кожного елемента вектора, множить кожне число вектора, знаходить середнє чисел вектора, знаходить максимальне і мінімальне числа вектора, а також сортує числа вектора.