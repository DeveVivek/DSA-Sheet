#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void swapAlternate(int arr[], int size)
{
    for(int i = 0; i<=size; i+=2)
        if (i+1 <size)
        {
            /* code */
            swap(arr[i], arr[i+1]);
        }
        
}
int main()
{
    int even[8] = {5,2,9,4,56,78,45,87};
    int odd[5] = {58,45,2,66,12};

    swapAlternate(even, 8);
    printArray(even, 8);
    swapAlternate(odd, 5);
    printArray(odd, 5);
return 0;
}