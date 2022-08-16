/*
    ->  Coding Ninja Question
    ->  Find Unique Key in array
    ->  Example - arr[5]={1,4,5,4,5}
    ->  output  - 1
*/
#include<iostream>
using namespace std;

int findUnique(int *arr, int size)
{
    int ans = 0;
    for(int i=0; i<size; i++)
    {    
        ans = ans^arr[i];
    }
    return ans;
}
int main()
{   
    int arr[] = {4,2,5,4,5};
    int size = 5;
    cout << findUnique(arr, size);
    return 0;
}