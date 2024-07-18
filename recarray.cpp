#include <iostream>
using namespace std;


void recurarray(int size, int arr[])
{
    if (size > 0)
    {
        recurarray(size - 1, arr);
        cout << arr[size - 1];
    }
}

void array()
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

    cout << "The entered array elements are: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
    cout << "\n\n";

    cout << "\nArray elements using recursive function: ";

    recurarray(size, arr);
    cout << "\n\n";
}

int main()
{
	array();
}
