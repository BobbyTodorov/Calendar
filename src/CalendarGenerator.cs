using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Calendar {
    class CalendarGenerator {

		public String[] generateCalendarString(int year) {
			return GenerateMonthsArray(year);
		}



		private String[] MONTHS = new String[12] { "January", "February", "March", "April", "May", "June", "July", 
													"August", "September", "October", "November", "December" };

		private String[] GenerateMonthsArray(int year) {
			String[] resultString = new string[12];

			int firstDayNumber = DayNumber(1, 1, year);

			for (int month = 0; month < 12; ++month) {
				int daysCount = NumberOfDays(month, year);

				int blankSpacesCount = 0;

				resultString[month] = GenerateDaysString(ref blankSpacesCount, ref firstDayNumber, daysCount);

				firstDayNumber = blankSpacesCount;
			}

			return resultString;
		}

		String GenerateDaysString(ref int blankSpacesCount, ref int firstDayNumber, int daysCount) {
			String resultString = null;

			for (blankSpacesCount = 0; blankSpacesCount < firstDayNumber; ++blankSpacesCount) {
				resultString += "         ";
			}

			for (int day = 1; day <= daysCount; ++day) {
				if (day / 10 == 0) {
					resultString += "       " + day;
				}
				else {
					resultString += "     " + day;
				}

				if (++blankSpacesCount > 6)
				{
					blankSpacesCount = 0;
					resultString += "\n";
				}
			}

			if (blankSpacesCount > 0) {
				resultString += "\n";
			}

			return resultString;
		}

		private int DayNumber(int day, int month, int year) {
			int[] e = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
			if (month < 3) {
				year -= 1;
			}

			return (year + year / 4 - year / 100 + year / 400 + e[month - 1] + day) % 7;
		}

		private string GetMonthName(int monthNumber) {
			return (MONTHS[monthNumber]);
		}

		private int NumberOfDays(int monthNumber, int year) {
			if (monthNumber == 3 || monthNumber == 5 || monthNumber == 8
				|| monthNumber == 10 || monthNumber == 12) {

				return 30;
			}

			if (monthNumber == 1) {
				if (IsLeapYear(year)) {
					return 29;
				}
				else {
					return 28;
				}
			}

			return 31;
		}

		private bool IsLeapYear(int year) {
			return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
		}
	}
}
