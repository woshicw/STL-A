/*
Wei Chen
CIS 1202
12/1/2020
*/

#include <iostream>
#include <cctype>


using namespace std;


char character(char start, int offset) 
{


    string exception1 = "ERROR: invalidCharacterExcpeption";
    string exception2 = "ERROR: invalidRangeException";
    int res = isalpha(start);



    if (isalpha) 
    {

        if (res == 0) 
        {

            throw exception1;
        }

        int value = (int)start;

        if (start >= 'a' && start <= 'z')
        {
            int upper = 122;
            int lower = 97;


            if ((value + offset) > upper || (value + offset) < lower) 
            {
                throw exception2;
            }

        }
        else if (start >= 'A' && start <= 'Z') 
        {

            int upper = 90;
            int lower = 65;


            if ((value + offset) > upper || (value + offset) < lower)
            {
                throw exception2;
            }
        }




        int result = (value + offset);


        return (char)result;
    }
}
int main()
{



    cout << "Character:" << endl;
    cout << character('a', 1) << endl;
    cout << character('Z', -1) << endl;
    cout << character('a', -1) << endl;
    cout << character('?', 5) << endl;
    cout << character('A', 32) << endl;




    cout << endl << endl;
    system("pause");
    return 0;
}