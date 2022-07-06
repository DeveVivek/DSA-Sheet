#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number\t";
    cin>>n;

    int row = 1;
    int value = 1;

    while (row<=n)
    {
        /* code */
        int col = 1;
        while (col<=n)
        {
            /* code */
            char ch = 'A' + value - 1;
            cout<<ch<<" ";
            value++;
            col++;
        }
        cout<<endl;
        row++;
    }
    
return 0;
}