#ifndef CALENDAR_GENERATOR_HEADER_INCLUDED
#define CALENDAR_GENERATOR_HEADER_INCLUDED

#include <iostream>

class CalendarGenerator {
public:
	std::string* generateCalendarString(int year);

private:
	int dayNumber(int day, int month, int year);
	std::string getMonthName(int monthNumber);
	int numberOfDays(int monthNumber, int year);
	bool isLeapYear(int year);
	std::string* generateMonthsArray(int year);
	std::string generateDaysString(int& blankSpacesCount, int& firstDayNumbe, int daysCount);
};
#endif // !CALENDAR_GENERATOR_HEADER_INCLUDED

