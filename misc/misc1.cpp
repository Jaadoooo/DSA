// all prime numbers till the given number
#include<iostream>
using namespace std;


int prime(int a)
{
    int j = 0;
    char x = ' ';
    for(int i=1; i<=a; i++)
    {
            int div = a%i;
            if(div==0)
            {
                j++;
            }
    }
    if(j>2)
    {
        return x;
    }
    else
    {
        return a;
    } 
}

int main ()
{
    int a;
    cin >> a;
    for (int i=2; i<=a; i++)
    {
        int c = prime(i);
        cout << c << endl;
    }
      
}













/*
#include<iostream>
using namespace std;

int main ()
{
    int a;
    int j = 0;
    cin >> a;
    for(int i=1; i<=a; i++)
    {
        int div = a%i;
        if(div==0)
        {
            j++;
        }
    }
    if(j>2)
    {
        cout << "Not Prime";
    }
    else
    {
        cout << "Prime";
    }   
}
*/
