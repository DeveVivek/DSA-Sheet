#include<iostream>
using namespace std;
int main()
{
    int n ;
    printf("Enter a number\t", n);
    cin>>n;
    int row = 1;

    while (row<=n)
    {
        /* code */
        int space = n - row;
        while (space)
        {
            /* code */
            cout<<" ";
            space--;
        }
        int j = 1;
        while (j<=row)
        {
            /* code */
            cout<<j;
            j++;
        }
        int start =row -  1;
        while (start)
        {
            /* code */
            cout<<start;
            start--;
        }
        
        printf("\n");
        row++;
    }
    
return 0;
}