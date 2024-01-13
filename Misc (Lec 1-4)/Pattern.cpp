/*
#include <iostream>
using namespace std;

int main()
{   
    int row,col;

    cout << "Enter no. of rows - ";
    cin >> row;                                    *******
    cout << "Enter no. of columns - ";             *******
    cin >> col;                                    *******      
    cout << endl;                                  *******

    for(int i=0; i<col; i++)
    {
        for(int j=0; j<row; j++)
        {
            cout << "*";
        }
        cout << "" << endl;
    }
}
*/






/*
#include <iostream>
using namespace std;

int main()
{   
    int num;                                 1 1 1 1
    cout << "Enter the no. - ";              2 2 2 2
    cin >> num;                              3 3 3 3                            
    int x = 1;                               4 4 4 4
                                             
    for(int i=1; i<=num; i++)
    {             
        for(int j=0; j<num; j++)
        {
            cout << x << ""; 
        }
        cout << endl;
        x++;
    }
}
*/






/*
#include <iostream>
using namespace std;

int main()
{   
    int num;                                 1 2 3 4
    cout << "Enter the no. - ";              1 2 3 4
    cin >> num;                              1 2 3 4                                                            
    for(int i=1; i<=num; i++)                1 2 3 4 
    {             
        for(int j=1; j<=num; j++)
        {
            cout << j << ""; 
        }
        cout << endl;
    }
}
*/





/*
#include <iostream>
using namespace std;

int main()
{   
    int num;                                 
    cout << "Enter the no. - ";            4 3 2 1  
    cin >> num;                            4 3 2 1                                                            
    for(int i=1; i<=num; i++)              4 3 2 1 
    {                                      4 3 2 1
        for(int j=num; j>0; j--)
        {
            cout << j << ""; 
        }
        cout << endl;
    }
}
*/





/*
#include <iostream>
using namespace std;

int main()
{   
    int num;                                 
    cout << "Enter the no. - ";              1 2 3
    cin >> num;                              4 5 6
    int x = 1;                               7 8 9                                                          
    for(int i=1; i<=num; i++)                
    {             
        for(int j=1; j<=num; j++)
        {
            cout << x << "";
            x++;
        }
        cout << endl;
    }
}
*/







/*
#include <iostream>
using namespace std;

int main()
{   
    int num;                                
    cout << "Enter the no. - ";             
    cin >> num;                              

    for(int i=1; i<=num; i++)                *
    {                                        **
        for(int j=1; j<=i; j++)              ***
        {                                    ****
            cout << "*";                     *****
        }
        cout << endl;
    }
}
*/








/*
#include <iostream>
using namespace std;

int main()
{   
    int num;                                
    cout << "Enter the no. - ";             1
    cin >> num;                             2 2 
    int y = 1;                              3 3 3
    for(int i=1; i<=num; i++)               4 4 4 4
    {                                       
        for(int j=1; j<=y; j++)              
        {                                    
            cout << i;                     
            
        }
        y++;
        cout << endl;
    }
}
*/








/*
#include <iostream>
using namespace std;

int main()
{   
    int num;                                
    cout << "Enter the no. - ";            
    cin >> num;                             
    int y = 1; 
    int z = 1;                             
    for(int i=1; i<=num; i++)               
    {                                       
        for(int j=1; j<=y; j++)              1  
        {                                    2 3 
            cout << z;                       4 5 6
            z++;                             7 8 9 10
        }
        y++;
        cout << endl;
    }
}
*/







/*
#include <iostream>
using namespace std;

int main()
{   
    int num;                                
    cout << "Enter the no. - ";            
    cin >> num;                              
    int y = 1;                              
                                            
    for(int i=1; i<=num; i++)               1
    {                                       2 3 
        int z = i;                          3 4 5 
        for(int j=1; j<=y; j++)             4 5 6 7 
        {                                    
            cout << z;                       
            z++;  
        }
        y++;
        cout << endl;
    }
    return 0;
}
*/








/*
#include <iostream>
using namespace std;

int main()
{   
    int num;                                
    cout << "Enter the no. - ";            
    cin >> num;                             
    int y = 1; 
    for(int i=1; i<=num; i++)               
    {                                       1
        for(int j=y; j>=1; j--)             2 1 
        {                                   3 2 1 
            cout << j;                      4 3 2 1                             
        }
        y++;
        cout << endl;
    }
}
*/







/*
#include <iostream>
using namespace std;

int main()
{   
    int num;                                
    cout << "Enter the no. - ";            A A A 
    cin >> num;                            B B B              
    char ch = 'A';                         C C C      
                                             
    for(int i=1; i<=num; i++)
    {             
        for(int j=0; j<num; j++)
        {
            cout << ch << ""; 
        }
        cout << endl;
        ch++;
    }
}
*/







/*
#include <iostream>
using namespace std;

int main()
{   
    int num;                                
    cout << "Enter the no. - ";           
    cin >> num;                                      
                                                                           
    for(int i=0; i<num; i++)                A B C D
    {                                       A B C D
        char ch = 'A';                      A B C D
        for(int j=0; j<num; j++)            A B C D
        { 
            cout << ch << " "; 
            ch++;
        }
        cout << endl;
    }
}
*/







/*
#include <iostream>
using namespace std;

int main()
{   
    int num;                                
    cout << "Enter the no. - ";           
    cin >> num;                                      
                                                                           
    for(int i=0; i<num; i++)               A B C D
    {                                      B C D E 
        char ch = 'A' + i;                 C D E F
        for(int j=0; j<num; j++)           D E F G
        { 
            cout << ch << " "; 
            ch++;
        }
        cout << endl;
    }
    return 0;
}
*/











/*
#include <iostream>
using namespace std;

int main()
{   
    int num;                                
    cout << "Enter the no. - ";          
    cin >> num;  
    char ch = 'A';

    int y = 1;                             A 
    for(int i=1; i<=num; i++)              B B 
    {                                      C C C 
        for(int j=1; j<=y; j++)            D D D D  
        {                                    
            cout << ch;                     
        }
        ch++;
        y++;
        cout << endl;
    }
}
*/








/*
#include <iostream>
using namespace std;

int main()
{   
    int num;                                
    cout << "Enter the no. - ";            
    cin >> num;                              
    int y = 1; 
                                        
    for(int i=0; i<num; i++)              
    {                                       A
        char ch = 'A' + i;;                 B C           
        for(int j=1; j<=y; j++)             C D E 
        {                                   D E F G
            cout << ch;                       
            ch++;  
        }
        y++;
        cout << endl;
    }
    return 0;
}
*/










/*
#include <iostream>
using namespace std;

int main()
{   
    int num;                                
    cout << "Enter the no. - ";          
    cin >> num;  
    char ch = 'A' + num - 1; 

    for(int i = 1; i <= num; i++)         
    {                                            D
        char temp = ch;                          C D 
        for(int j = 1; j <= i; j++)              B C D
        {                                        A B C D
            cout << temp;                     
            temp++;
        }
        ch--;
        cout << endl;
    }
    return 0;
}
*/








/*
#include <iostream>
using namespace std;

int main()
{  
    int num;                                
    cout << "Enter the no. - ";           
    cin >> num;     

                                                                                  
    for(int i=1; i<=num; i++)               
    {                                       *
        int x = num-i;                    * *
        for(int k=1; k<=x; k++)         * * *
        {                             * * * *
            cout << " ";
        }
        for(int j=1; j<=i; j++)
        {
            cout <<"*"; 
        }
        cout << endl;
    }
}
*/










/*
#include <iostream>
using namespace std;

int main()
{  
    int num;                                
    cout << "Enter the no. - ";           
    cin >> num;     

                                                                                  
    for(int i=0; i<num; i++)               
    {                                     * * * * 
        int x = num - i;                    * * * 
        for(int k=0; k<=i; k++)               * * 
        {                                       *
            cout << " ";
        }
        for(int j=0; j<x; j++)
        {
            cout <<"*"; 
        }
        cout << endl;
    }
}
*/








/*
#include <iostream>
using namespace std;

int main()
{  
    int num;                                
    cout << "Enter the no. - ";           
    cin >> num;     

                                                                                  
                                         
    for(int i=1; i<=num; i++)               
    {                                       
        int x = num-i;         
        for(int k=1; k<=x; k++)       
        {                             
            cout << " ";                            1
        }                                         1 2 1
        for(int j=1; j<=i; j++)                 1 2 3 2 1
        {                                     1 2 3 4 3 2 1 
            cout <<j; 
        }
        for(int j = i - 1; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}
*/











/*
#include <iostream>
using namespace std;

int main()
{  
    int num;                                
    cout << "Enter the no. - ";           
    cin >> num;     

                                                                                  
    for(int i=0; i<num; i++)               
    {                                     
        int x = num - i;                    
        for(int j=1; j<=x; j++)
        {                                       12344321
            cout <<j;                           123**321
        }                                       12****21
        for(int k=0; k<=2*i-1; k++)             1******1
        {
            cout << "*";
        }
        for(int j=x; j>=1; j--)
        {
            cout <<j; 
        }
        cout << endl;
    }
}
*/