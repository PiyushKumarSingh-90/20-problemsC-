// Write a C++ program to find the sum of digits of a number until it becomes a single-digit number.

#include <iostream>
using namespace std;

int main()
{
    int n, choice;
    bool doagain = true;
    do
    {
        cout << "Enter a number : ";
        cin >> n;

        cout << "Sum of digits of " << n;
        int sum = 0;

        while (n > 0 || sum > 9)
        {
            if (n == 0)
            {
                n = sum;
                sum = 0;
            }
            sum = sum + n % 10;
            n = n / 10;
        }
        cout << " till it becomes a single digit is : " << sum << endl;

        cout << endl<< "Check another number? " << endl;
        do
        {
            cout << "Press 1 for yes, 2 for No" << endl;
            cin >> choice;

            if (choice != 2 && choice != 1)
            {
                cout << "Please enter valid response " << endl;
            }
        } while (choice != 2 && choice != 1);

        if (choice == 2)
        {
            doagain = false;
            cout << "Thank you for using this program, have a great day!!🤝🤝 ";
        }
    } while (doagain == true);

    return 0;
}