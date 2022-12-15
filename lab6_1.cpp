#include<iostream>
using namespace std;

int main()
{
    int x , o = 0 , e = 0  ;
    
    while (x!=0)
    {
        cout << "Enter an integer: ";
        cin >> x ;
        if (x!=0)
        {
             if (x%2 == 0)
                {
                    e++ ;
                }
                else
                    {
                        o++ ;
                    }
        
        }
    }
        cout << "#Even numbers = " << e << endl ;
        cout << "#Odd numbers = " << o << endl ;

    return 0;

}