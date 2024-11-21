#include <iostream>
#include <cmath> 
#include <Windows.h>
#include <iostream>

using namespace std;

template <typename T>
T abs_value(T num) {
	return abs(num);
}
template <typename T>
class SequentialSearch {
public:
    SequentialSearch(T* arr, int size) : arr(arr), size(size) {}
    int search(T key) {
        for (int i = 0; i < size; i++) {
            if (arr[i] == key) {
                return i;
            }
        }
        return -1;
    }

    void printElement(int index) {
        if (index >= 0 && index < size) {
            cout << "Елемент знайдено за індексом: " << index << endl;
            cout << "Значення елемента: " << arr[index] << endl;
        }
        else {
            cout << "Елемент не знайдено." << endl;
        }
    }

private:
    T* arr; 
    int size; 
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    // Завдання 1
    	double num;
	cout << "Введіть число: ";
	cin >> num;
	cout << "Модуль " << num << " = " << abs_value(num) << endl;

    //Завдання 2
    char charArr[] = { 'a', 'c', 'b', 'e', '1' };
    int charSize = sizeof(charArr) / sizeof(charArr[0]);
    SequentialSearch<char> charSearch(charArr, charSize);
    char charKey;
    cout << "Введіть символ для пошуку:" << endl;
    cin >> charKey;
    int charIndex = charSearch.search(charKey);
    charSearch.printElement(charIndex);

    return 0;
}