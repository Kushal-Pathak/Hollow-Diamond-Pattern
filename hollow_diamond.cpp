#include <iostream>
#include <conio.h>
using namespace std;

void display(int);

int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;
    if (size % 2 == 0)
        size++;
    display(size);
    getch();
    return 0;
}

void display(int size)
{
    system("cls");
    int side, mid;
    for (int i = 0; i < size / 2; i++)
    {
        mid = 2 * i + 1;
        side = (size - mid) / 2;

        for (int k = 0; k < side; k++)
        {
            cout << "* ";
        }
        for (int k = 0; k < mid; k++)
        {
            cout << "  ";
        }
        for (int k = 0; k < side; k++)
        {
            cout << "* ";
        }

        cout << endl;

        // cout << endl
        //      << "mathi";
    }
    for (int i = size / 2; i >= 0; i--)
    {
        mid = 2 * i + 1;
        side = (size - mid) / 2;

        for (int k = 0; k < side; k++)
        {
            cout << "* ";
        }
        for (int k = 0; k < mid; k++)
        {
            cout << "  ";
        }
        for (int k = 0; k < side; k++)
        {
            cout << "* ";
        }

        cout << endl;

        // cout << endl
        //      << "tala";
    }
}