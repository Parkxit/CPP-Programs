#include <iostream>
using namespace std;


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


int main()
{
	fibonacci();
}
