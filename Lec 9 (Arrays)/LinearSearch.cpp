#include<iostream>
using namespace std;

int main()
{   
    int arr[100] = {1,5,225,2,6,47,63,13,89,65,21,63,0,0,4,3,857,32};
    int key;
    cout << "Enter the element to search for - ";
    cin >> key;

    for(int i=0; i<100; i++)
    {
        if(key==arr[i])
        {
            cout << "Key Found";
            break;
        }
        else
        {
            cout << "Key not found";
            break;
        }
    }
    
}