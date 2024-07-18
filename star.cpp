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

int main()
{
	star();
}
