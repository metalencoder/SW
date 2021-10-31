#include <iostream>
#include <ctime>
#include<iomanip>
#include<conio.h>
using namespace std;

int* createArr(int size)
{
    cout << "Enter random number generation range: ";
    int A, B;
    cin >> A >> B;
    cout << endl;
    int* arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % (B - A) - A;
    }
    for (int i = 0; i < size; i++)
    {
        cout << fixed << arr[i] << setw(3);
    }
    return arr;
}

int positionElementArray(int size, int* mass)
{
    int position;
    int element;
    cout << endl;
    cout << "Enter element: ";
    cin >> element;
    for (int i = 0; i < size; i++)
    {
        if (element == mass[i])
        {
            position = i;
            break;
        }
    }
    return position;
}
void findNumber(int size, int* mass)
{
    for (int i = 0; i < size; i++)
    {
        if (((mass[i] - mass[i + 1]) > mass[i + 2]) && (i + 2) < size)
        {
            cout << mass[i + 2] << " ";
        }

    }
}
void findlength(int length[], int size1, int k = 1, int max = 0)
{
    for (int i = 0; i < size1 - 1; i++)
    {
        if (length[i] == length[i + 1])
        {
            k++;
        }
        else
        {
            k = 1;
        }
        if (k > max)
            max = k;
    }
    cout << max << endl;
}
void print(int** array, size_t n, size_t m) {
    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < m; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl << endl;
    }
}
int** allocMatrix(size_t n, size_t m) {
    int** array = new int* [n];
    for (size_t i = 0; i < n; ++i) {
        array[i] = new int[m];
    }
    return array;
}
void freeMatrix(int** array, size_t n, size_t m) {
    for (size_t i = 0; i < n; ++i) {
        delete[] array[i];
    }
    delete[] array;
}


int main()
{
    srand(time(0));
    cout << "Enter size of the array: ";
    int size;
    cin >> size;
    int* arr = createArr(size);
    int pos = positionElementArray(size, arr);
    cout << "PositionElementArray: " << pos << endl;
    cout << "=======Task 2=======" << endl;
    findNumber(size, arr);
    cout << endl;
    delete[]arr;
}