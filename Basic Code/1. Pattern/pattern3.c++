#include <iostream>
using namespace std;
int main()
{
    int n;
    printf("Enter a number\t");
    cin>>n;
    int row = 1;
    while (row <= n)
    {
        /* code */
        int col = 1;
        while (col <= n)
        {
            /* code */
            char ch = 'A' + row - 1;
            cout<<ch<<" ";
            col = col + 1;
        }
        printf("\n");
        row = row + 1;
    }

    return 0;
}