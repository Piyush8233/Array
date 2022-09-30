#include <iostream>
using namespace std;

int binary(int arr[],int a, int n, int se);

int main()
{
    int n;
    cout << "Enter size of array : ";
    cin >> n;
    int arr[n];

    cout << "Enter array elements : ";
    for (auto &i : arr)
        cin >> i;

    int se ;
    cout << "Enter element for searching : ";
    cin >> se;

    cout << "Element found at Index  : " << binary(arr, 0, n, se);

    return 0;
}

int binary (int arr[],int a, int n , int se)
{
    int e = n ;
    int s = a;
    int mid = (e+s)/2;
    if(arr[mid] == se)
    {
        return mid+1 ;
    }
    else 
    {
        if(se < arr[mid])
            binary(arr, s, mid-1, se);
        
        else 
            binary(arr, mid+1, n, se);
    }

}