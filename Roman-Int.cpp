#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>

using namespace std;

class Solution 
{
public:
    int romanToInt(string s) 
    {   
        
        map<char, int> con;
        con['I'] = 1;
        con['V'] = 5;
        con['X'] = 10;
        con['L'] = 40;
        con['C'] = 100;
        con['D'] = 500;
        con['M'] = 1000;
        int counti = 0;
        for(int i=0; i<s.length(); i++)
        {
            char search =s[i];
            auto it = con.find(search);
            if (it != con.end()) 
            {
                cout << "found" << it <<endl;
                counti++;   
            } 
            else 
            {
                cout << "not found" << endl;
            }
        }

    


    





        return 0;
    }
};







int main() 
{   
    string s;
    cout << "Enter a Roman number - ";
    cin >> s;
    Solution solution;
    solution.romanToInt(s);

}
