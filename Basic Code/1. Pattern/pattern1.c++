#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a nummber\t";
    cin>>n;


    int i =1;

    while (i<=n)
    {
        /* code */
        int j = 1;
        while (j<=i)
        {
            /* code */
            cout<<(i-j+1)<<" ";
            j = j+1;
        }
        cout<<endl;
        i = i +1;
    }
    
return 0;
}