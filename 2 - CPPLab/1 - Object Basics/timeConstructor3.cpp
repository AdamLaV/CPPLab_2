#include <iostream>
#include <iomanip>
using namespace std;

class Time {
private:
	int hour;
	int minute;

public:
	Time(int startHour, int startMinute);

	void print() {
     		int twelveHour = hour % 12;
		if(twelveHour == 0)
			twelveHour = 12;

		cout << setfill('0');   //pad with 0's
		cout << twelveHour << ":" << setw(2) << minute << " ";
		if(hour >= 12)
		    cout << "PM" << endl;
		else
		    cout << "AM" << endl;
	}
};


int main()
{
	Time t1(15, 31);
	t1.print();
}

//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

Time::Time(int hour, int minute) {
	this->hour = hour;
	this->minute = minute;
}


//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this 
