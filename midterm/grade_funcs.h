#pragma once
#include <stdio.h>
extern int grade[];
float average;
int calculate_average(int grade[]) {
	float all_grade = 0;
	for (int i = 0; i < 10; i++) {
		all_grade = all_grade + grade[i];
	}
	average = all_grade / 10;
	printf("Average grade:%.1f\n", average);

	
	return average;
}
void find_min_max(int grade[]) {
	int max, min;
	max = grade[0];
	for (int i = 1; i < 10; i++) {
		if (max < grade[i]) {
			max = grade[i];
		}
	}


	min = grade[0];
	for (int i = 1; i < 10; i++) {
		if (min > grade[i]) {
			min = grade[i];
		}
	}
	printf("Highest grade:%d\n", max);
	printf("Lowest grade:%d\n", min);

	printf("\n\n");
	printf("Grades above average:");
	for (int i = 0; i < 10; i++) {
		if (grade[i] > average)
			printf("%d\t", grade[i]);
	}
	printf("\n");
	printf("Grades below average:");
	for (int i = 0; i < 10; i++) {
		if (grade[i] < average)
			printf("%d\t", grade[i]);
	}

}
void count_pass_fail(int grade[]) {
	int pass = 0, fail = 0;
	for (int i = 0; i < 10; i++) {
		if (grade[i] >= 60)
			++pass;
	}

	for (int i = 0; i < 10; i++) {
		if (grade[i] < 60)
			++fail;
	}
	printf("\n\n");
	printf("Number of students passing:%d\n", pass);
	printf("Number of students failing:%d\n", fail);

}