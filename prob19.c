#include <stdio.h>



int main(int argc, char const *argv[])
{
	int daysInMonth[] = { 31,
					      28,
					      31,
					      30,
					      31,
					      30,
					      31,
					      31,
					      30,
					      31,
					      30,
					      31 };

	int dayOfMonth = 1, month = 1, year = 1900, dayOfWeek = 1, numSundays = 0;

	while(!(year == 2000 && month == 12 && dayOfMonth == 2) ){
		

		if (dayOfMonth > daysInMonth[month - 1])
	    {
	    	dayOfMonth = 1;
	    	month++;
	    }

	    if (month > 12)
    	{
    		month = 1;
    		year++;
    		//Leap year check
    		if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
    			daysInMonth[1] = 29;
    			printf("%d is a leap year\n", year);
    		}else{
    			daysInMonth[1] = 28;
    		}
    	}

	    if(dayOfWeek > 7) {
	    	dayOfWeek = 1;
	    }
	    
	    if (dayOfMonth == 1 && dayOfWeek == 7 && year > 1900) numSundays++;
	    
	    dayOfMonth++;
		dayOfWeek++;

	}
	printf("Number on sundays on the first day of the month: %d\n", numSundays);
	return 0;
}