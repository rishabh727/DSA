#include <iostream>

using namespace std;
void inseartion(int arr[], int element, int index, int size)
{

    if (index >= size)
    {
        return;
    }
    for (int i = size; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[index] = element;
    size++;
}

int main()
{
    int arr[100] = {
        1,
        3,
        6,
        9,
        10,
        77,
        78,
    };
    int element = 8;
    int index = 3;
    int size = 7;
    inseartion(arr, element, index, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;

    return 0;
}