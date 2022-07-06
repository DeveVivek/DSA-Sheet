#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}
int main()
{
    int even[6] = {2,4,5,6,7,8};
    int odd[5] = {45,3,5,62,98};

    int indexEven = binarySearch(even, 6, 5);
    cout<<"Index of 5 is " << indexEven <<endl;

    int indexOdd = binarySearch(odd, 6, 62);
    cout<<"Index of 62 is " << indexOdd <<endl;
    return 0;
}