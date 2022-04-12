#include <iostream>
#include <ctime>

using namespace std;

int main(int argc, char **argv)
{
	// call time
	time_t time_now_1 = time(NULL);
	cout << time_now_1 << endl;

	time_t time_now_2 = time(&time_now_2);
	cout << time_now_2 << endl;

	// pointer call ctime
	char *ptime_char_x = ctime(&time_now_1);
	cout << ptime_char_x; // The string is followed by '\n'

	// using struct tm
	struct tm time_x = {0};
	time_x.tm_year = 2021 - 1900;
	time_x.tm_mon = 12 - 1;
	time_x.tm_mday = 20;

	cout << (time_x.tm_year + 1900) << "/"
		 << (time_x.tm_mon + 1) << "/"
		 << (time_x.tm_mday) << endl;

	// call localtime
	time_t time_now_3 = time(NULL);
	struct tm *time_y = localtime(&time_now_3);
	cout << (time_y->tm_year + 1900) << "/"
		 << (time_y->tm_mon + 1) << "/"
		 << (time_y->tm_mday) << endl;

	// call strftime
	char *ptime_char_y = new char[30];
	strftime(ptime_char_y, 30, "Now is %Y/%m/%d %H:%M:%S ", time_y);
	cout << ptime_char_y << endl;

	// calculate date
	cout << "---Date Calculator---" << endl;
	cout << "Plz enter a date to know the gap days compared to this moment. (yyyy/mm/dd)" << endl;
	struct tm time_input = {0};
	char input_char[10];
	cin >> input_char;
	time_input.tm_year = ((int)(input_char[0]) - 48) * 1000 - 1900 +
						 ((int)(input_char[1]) - 48) * 100 +
						 ((int)(input_char[2]) - 48) * 10 +
						 ((int)(input_char[3]) - 48);
	time_input.tm_mon = ((int)(input_char[5]) - 48) * 10 - 1 +
						((int)(input_char[6]) - 48);
	time_input.tm_mday = ((int)(input_char[8]) - 48) * 10 +
						 ((int)(input_char[9]) - 48);

	time_t time_calculation_now = mktime(time_y);
	time_t time_calculation_input = mktime(&time_input);
	cout << (time_calculation_input - time_calculation_now) / 86400.0 << endl;

	// call difftime
	double day_gap = difftime(time_calculation_input, time_calculation_now) / 86400.0;
	cout << day_gap << endl;

	return 0;
}