#include<iostream>

using namespace std;

#include <cstdlib>
bool iDel(int* array, int& lenAr, int nom);

int main()
{
    int length_array;
    cout << "Specify the number of array elements: ";
    cin >> length_array;

    int* arrayPtr = new int[length_array]; 

    
    for (int counter = 0; counter < length_array; counter++)
    {
        arrayPtr[counter] = rand() % 100; 
        cout << arrayPtr[counter] << "  "; 
    }
    cout << endl;

    int n;
    cout << "Specify the number of the array element to delete: ";
    cin >> n;

    iDel(arrayPtr, length_array, n);

    for (int counter = 0; counter < length_array; counter++)
    {
        cout << arrayPtr[counter] << "  "; 
    }

    cout << endl;

    delete[] arrayPtr;

    return 0;
}

bool iDel(int* array, int& lenAr, int nom)
{
    if (nom > lenAr || nom < 1)
    {
        cout << "Ошибка удаления" << endl;
        return false;
    }

    for (int ix = nom - 1; ix < lenAr - 1; ix++)
    {
        array[ix] = array[ix + 1];
    }
    lenAr--;
    return true;
}