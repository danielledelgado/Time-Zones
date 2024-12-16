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
   time_t now = time(nullptr); // gets the current time
   cout << "Current time: " << ctime(&now);

   // EXCERCISE TWO
   int timeZoneOffset;
   cout << "Enter a timezone offset: ";
   cin >> timeZoneOffset; // puts a number into timezoneoffset variable

   now += timeZoneOffset * 3600; // 60 secs in a minute, 60 minutes in an hour

   tm* timeZoneTime = gmtime(&now); // gets the time of that number

   cout << "Current time in that offset: " << asctime(timeZoneTime);

   // EXCERCISE THREE
   int answer;
   time_t beginning; // gets the beginning time
   time_t end; // gets the ending time

   time(&beginning); // gets the time
    cout << "what's 2+2" << endl;
    cin >> answer;
   time(&end); // gets the time

   cout << "it took you " << difftime(end, beginning) << " seconds to answer"; // uses difftime to calculate the amount of seconds it took

    return 0;
}