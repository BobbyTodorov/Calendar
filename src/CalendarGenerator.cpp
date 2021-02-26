
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
	return generateMonthsArray(year);
}

std::string* CalendarGenerator::generateMonthsArray(int year) {
	std::string* resultString = new std::string[12];

	int firstDayNumber = dayNumber(1, 1, year);

	for (int month = 0; month < 12; ++month) {
		int daysCount = numberOfDays(month, year);

		int blankSpacesCount;

		resultString[month] = generateDaysString(blankSpacesCount, firstDayNumber, daysCount);

		firstDayNumber = blankSpacesCount;
	}

	return resultString;
}

std::string CalendarGenerator::generateDaysString(int& blankSpacesCount, int& firstDayNumber, int daysCount) {
	std::string result;
	
	for (blankSpacesCount = 0; blankSpacesCount < firstDayNumber; ++blankSpacesCount) {
		result.append("         ");
	}

	for (int day = 1; day <= daysCount; ++day) {
		char buff[20];
		if (day / 10 == 0) {
			snprintf(buff, sizeof(buff), "%8d", day);
		}
		else {
			snprintf(buff, sizeof(buff), "%7d", day);
		}
		std::string buffAsStdStr = buff;
		result.append(buffAsStdStr);

		if (++blankSpacesCount > 6) {
			blankSpacesCount = 0;
			result.append("\n");
		}
	}

	if (blankSpacesCount) {
		result.append("\n");
	}

	return result;
}


bool CalendarGenerator::isLeapYear(int year) {
	return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
}
