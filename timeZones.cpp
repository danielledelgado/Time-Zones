#include <iostream>
#include <ctime>
using namespace std;

int main( ){
    /*
    Practice with time zones:
    1. If it is 10AM in London. What time is it in Tokyo? What is the UTC offset?
        It is 7PM in Tokyo, the UTC offset is +9 hours
    2. What is the UTC offset for Mountain Standard Time?
        The UTC offset for Mountain Standard Time is -7 hours 
    */


   // EXCERCISE ONE
   time_t now = time(nullptr);
   cout << "Current time: " << ctime(&now);

    return 0;
}