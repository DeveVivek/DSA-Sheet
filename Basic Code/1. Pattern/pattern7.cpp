#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number\t";
    cin >> n;

    int row = 1;

    while (row <= n)
    {
        /* code */
        int col = 1;
        char ch = 'A' + n - row;
        while (col <= row)
        {
            /* code */
            cout << ch << " ";
            ch++;
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}