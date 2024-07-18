#include <iostream>
using namespace std;


void revrecurarr(int size, int arr[])
{
    if (size > 0)
    {
        cout << arr[size - 1];
        revrecurarr(size - 1, arr);
    }
}

void revarray()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter array elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "The array elements in reverse order are: ";
    for (int i = size - 1; i >= 0; i--)
    {
        cout << arr[i];
    }
    cout << "\n\n";

    cout << "The array elements in reverse order using recursive function are: ";
    revrecurarr(size, arr);
    cout << "\n";
}

int main()
{
	revarray();
}
