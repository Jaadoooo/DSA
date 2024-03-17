// Find the maximum occurence of an alphabet in the string 

#include <iostream>

using namespace std;

void occurence(string str)
{
    int arr[26] = {0};
    
    for(int i=0; i<str.length(); i++)
    {
        char ch = str[i];
        int number = ch - 'a';
        arr[number]++;
    }

    int maxi = -1;
    for(int i=0; i<26; i++)
    {
        maxi = max(arr[i],maxi);
    }
    char ans;
    for(int i=0; i<26; i++)
    {
        if(arr[i]==maxi)
        {
            ans = 'a' + i;
        }
    }
    cout << "Most occurence is of " << ans << " - " << maxi << " times";

}

int main()
{
    string str = "Chittttttttttrakaaseria";
    occurence(str);

}