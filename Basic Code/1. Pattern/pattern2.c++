#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number\t";
    cin>>n;
    int i = 1;
    while (i<=n)
    {
        /* code */
        int j = 1;
        while (j<=i)
        {
            /* code */
            cout<<"*"<<" ";
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }
    
return 0;
}