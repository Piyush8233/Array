// Array index deletion program 

#include <iostream>
#include <array>

int main()
{
    int n; 
    std :: cout << "Enter size of array : ";
    std :: cin >> n;
    int arr[n];

    std :: cout << "Enter elements of array : ";
    for (auto &i : arr)
        std:: cin >> i;
    
    std :: cout << "Array elements are : \n";
    for(auto i : arr)
        std :: cout << i << " ";
    
    std :: cout << std :: endl;

    int index ; 
    std :: cout << "Enter the index which you want to delete : ";
    std :: cin >> index;

   for ( int i = index; i < n; i++)
    {
        arr[index] = arr[index+1];
    }

    std :: cout << "Array elements are : \n";
    for(int i = 0; i < n-1; i++)
        std :: cout << arr[i] << " ";

    return 0;
}