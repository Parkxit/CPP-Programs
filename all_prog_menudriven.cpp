#include <iostream>
using namespace std;

void star()
{
    int rows;
    cout << "\nEnter number of rows: ";
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    cout << "\n\n";
}

void decreasingStar()
{
    int rows;
    cout << "\nEnter number of rows: ";
    cin >> rows;
    for (int i = rows; i > 0; i--)
    {
        for (int j = 0; j < rows - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    cout << "\n\n";
}

void fibonacci()
{
    int terms;
    cout << "\nHow many terms starting from the first term do you want?\nEnter the number of terms: ";
    cin >> terms;

    if (terms == 1)
    {
        cout << "The first term is 0.";
    }
    else if (terms == 2)
    {
        cout << "0,1";
    }
    else if (terms == 0)
    {
        cout << "Zero terms";
    }
    else if (terms < 0)
    {
        cout << "Invalid number";
    }
    else
    {
        int first = 0;
        int second = 1;
        int temp;
        cout << first << "," << second;
        for (int i = 3; i <= terms; i++)
        {
            temp = first + second;
            cout << "," << temp;
            first = second;
            second = temp;
        }
    }
    cout << "\n\n";
}

int recurfact(int n)
{
    if (n > 1)
    {

        return n * (recurfact(n - 1));
    }
}

void factorial()
{
    int num;
    cout << "Enter the number for its factorial: ";
    cin >> num;
    if (num < 0)
    {
        cout << "Factorial of a negative number does not exist.";
    }
    else if (num == 0)
    {
        cout << "Factorial of 0 is 1.";
    }
    else
    {
        int fact = num;
        for (int i = num - 1; i > 1; i--)
        {
            fact = fact * i;
        }
        cout << "Factorial of " << num << " is: " << fact;
    }
    cout << "\n\n";

    cout << "Factorial using recursion: ";
    cout << recurfact(num);
    cout << "\n\n";
}

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

    int ch;
    do
    {
        cout << "\nChoose any one one option from below:\n1)Print star pattern in increasing oder.\n2)Print star pattern in decreasing oder.\n3)Print first n numbers in the fibonacci series.\n4)Factorial of a number.\n5)Array elemnts.\n6)Array elements in reverse order.\n7)Exit.\nEnter choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            star();
            break;

        case 2:
            decreasingStar();
            break;

        case 3:
            fibonacci();
            break;
        case 4:
            factorial();
            break;
        case 5:
            array();
            break;
        case 6:
            revarray();
            break;
        case 7:
            cout << "OK";
            break;
        default:
            cout << "Invalid choice. Please enter correct choice.";
        }
    } while (ch != 7);
}

