
#include "CalendarGenerator.h"
#include <string> 

const std::string MONTHS[] = { "January", "February", "March", "April", "May", "June",
					"July", "August", "September", "October", "November", "December" };

int CalendarGenerator::dayNumber(int day, int month, int year) {
	static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
	year -= month < 3;
	return (year + year / 4 - year / 100 + year / 400 + t[month - 1] + day) % 7;
}

std::string CalendarGenerator::getMonthName(int monthNumber) {
	return (MONTHS[monthNumber]);
}

int CalendarGenerator::numberOfDays(int monthNumber, int year) {
	if (monthNumber == 3 || monthNumber == 5 || monthNumber == 8 
		|| monthNumber == 10 || monthNumber == 12) {

		return 30;
	}

	if (monthNumber == 1) {
		if (isLeapYear(year)) {
			return 29;
		}
		else {
			return 28;
		}
	}

	return 31;
}

std::string* CalendarGenerator::generateCalendarString(int year) {
	std::string* resultString = new std::string[12];

	int days;

	int currentDayNumber = dayNumber(1, 1, year);

	for (int month = 0; month < 12; ++month) {
		days = numberOfDays(month, year);

		int blankSpace;
		for (blankSpace = 0; blankSpace < currentDayNumber; ++blankSpace) {
			resultString[month].append("         ");
		}

		for (int day = 1; day <= days; ++day) {
			char buff[20];
			if (day / 10 == 0) {
				snprintf(buff, sizeof(buff), "%8d", day);
			}
			else {
				snprintf(buff, sizeof(buff), "%7d", day);
			}
			std::string buffAsStdStr = buff;
			resultString[month].append(buffAsStdStr);

			if (++blankSpace > 6) {
				blankSpace = 0;
				resultString[month].append("\n");
			}
		}

		if (blankSpace) {
			resultString[month].append("\n");
		}

		currentDayNumber = blankSpace;
	}

	return resultString;
}


bool CalendarGenerator::isLeapYear(int year) {
	return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
}
