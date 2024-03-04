#include <iostream>
using namespace std;


int main()
{  
    int num;                                
    cout << "Enter the no. - ";           
    cin >> num;     


    // Print the top pyramid
    for (int i = 1; i <= num; i++) 
    {
        int x = num - i;
        for (int k = 1; k <= x; k++) 
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) 
        {
            cout << "* ";
        }
        cout << endl;
    }

    // Print the inverted pyramid
    for (int i = num - 1; i >= 1; i--) 
    {
        int x = num - i;
        for (int k = 1; k <= x; k++) 
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) 
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}


/*
       *
      * *
     * * *
    * * * *
     * * *
      * *
       *
*/
