#include <iostream>
#include <time.h>
#include <unistd.h>
#include "new_isotriangle.h"
#include "IsoTriangle.h"

#define SIZE 100000


int main (){
///////////////////////////////////////////////////////////////////////////////////////////////////////////
//////// TEST FOR NEW ISOTRIANGLE

	//start of timer
	struct timespec begin1;
	clock_gettime (CLOCK_PROCESS_CPUTIME_ID, &begin1);

	new_isotriangle new_tri [SIZE];

	for (int i = 0 ; i < SIZE ; i++){
		new_tri[i].SetBase(2);
		new_tri[i].SetHeight(2);
		new_tri[i].GetPerimeter();
		new_tri[i].GetArea();
	}
	
	//stop of timer
	struct timespec end1;
	clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &end1);
	//calculates difference from start to stop to get actual cpu time	
	double time_spent1 = (end1.tv_sec - begin1.tv_sec) + (end1.tv_nsec - begin1.tv_nsec)/1000000000.0;
	cout << "\n\n************time elapsed for new tri: "<< time_spent1 << "\n\n" << endl;

////////////////////////////////////////////////////////////////////////////////////////////////////////////
////// TEST FOR ORIGINAL ISOTRIANGLE

	//start of timer
	struct timespec begin2;
	clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &begin2);

	IsoTriangle old_tri [SIZE];
	for (int i = 0; i < SIZE; i++){
		old_tri[i].SetBase(2);
		old_tri[i].SetHeight(2);
		old_tri[i].GetPerimeter();
		old_tri[i].GetArea();
	}
	//stop of timer	
	struct timespec end2;
	clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &end2);

	double time_spent2 = (end2.tv_sec - begin2.tv_sec) + (end2.tv_nsec - begin2.tv_nsec)/1000000000.0;
	cout << "\n\n******************time elapsed for old tri: " << time_spent2 << "\n\n" <<endl;

	int effectivness = ((time_spent2/time_spent1) * 100) - 100;
	cout << "Not calculating area everytime is :" << effectivness << "% more effective" << endl;
	return 0;
}


