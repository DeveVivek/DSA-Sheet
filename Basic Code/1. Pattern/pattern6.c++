#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"Enter a number\t";
    cin>>n;

    int row = 1;
    while (row<=n)
    {
        /* code */
        int col = 1;
        while (col<=n)
        {
            /* code */
            char ch = 'A' + row + col -2;
            cout<<ch<<" ";
            col++;
        }
        printf("\n");
        row++;
    }
    
return 0;
}