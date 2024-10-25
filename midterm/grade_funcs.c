#include <stdio.h>
#include "grade_funcs.h"


int main(void) {
	int grade[10] = { 85, 70, 55, 90, 45, 60, 78, 88, 92, 49 };
	calculate_average(grade);
	find_min_max(grade);
	count_pass_fail(grade);
	return 0;
	
}