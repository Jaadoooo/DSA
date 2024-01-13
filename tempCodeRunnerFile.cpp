int main()
{   
    int num;                                
    cout << "Enter the no. - ";           
    cin >> num;                                      
    char ch = 'A';                          
                                             
    for(int i=1; i<=num; i++)
    {             
        for(int j=0; j<num; j++)
        {
            cout << ch << ""; 
            ch++;
        }
        cout << endl;
        
    }
}