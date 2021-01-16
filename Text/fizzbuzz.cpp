#include <iostream>

using namespace std;
int main() {
    /*
    Fizz Buzz - Write a program that prints the numbers from 1 to 100.
    But for multiples of three print “Fizz” instead of the number
    and for the multiples of five print “Buzz”.
    For numbers which are multiples of both three and five print “FizzBuzz”.

     Ex: 1, 2, FIZZ, 3, BUZZ, FIZZ, 7, 8, FIZZ, BUZZ, 11, FIZZ, 13, 14, FIZZBUZZ, 15, 17, FIZZ...
    */

    int counter = 1;
    while(counter != 101)
    {
        if(counter % 3 == 0 && counter % 5 == 0)
        {
            cout<<"FIZZBUZZ"<<endl;
        }
        else if(counter % 3 == 0)
        {
            cout<<"FIZZ"<<endl;
        }
        else if(counter % 5 == 0)
        {
            cout<<"BUZZ"<<endl;
        }
        else
        {
            cout<<counter<<endl;
        }
        counter++;
    }
    return 0;
}
