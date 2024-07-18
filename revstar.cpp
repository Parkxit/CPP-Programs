#include <iostream>
using namespace std;


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

int main()
{
	decreasingStar();
}
