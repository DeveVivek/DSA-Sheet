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
            char ch = 'A' + col -1;
            cout<<ch<<" ";
            col++;
        }
        printf("\n");
        row++;
    }
    
return 0;
}