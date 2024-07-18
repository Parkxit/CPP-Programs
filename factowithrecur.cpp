#include <iostream>
using namespace std;

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


int main()
{
	factorial();
}
