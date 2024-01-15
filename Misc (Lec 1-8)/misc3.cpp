// Prime number or not according to Love Babar

#include<iostream>
using namespace std;

int main() 
{
    int a;
    cin >> a;
    int i = 2;

    while (i<a)
    {
        if(a%i==0)
        {
            cout << "Not a Prime";

        }
        else
        {
            cout << "Prime";
        }
        i = i+1;
    }

}





// Mera tarekka joh 10x better hai

/*#include<iostream>
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
