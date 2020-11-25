#include <string>
#include <iostream>
using namespace std;
/**************  Timeslot  **************/
struct Timeslot
{
	char day;
	int slot;
};
Timeslot setTimeslot(char day, int slot)
{
	Timeslot t;
	t.day = day;
	t.slot = slot;
	return t;
}

/**************  Course  **************/
struct Course
{
	int code;
	int creditHours;
	char grade;
	Timeslot timeslot;
	int* prerequisites;
};

void setCourse(Course& c)
{
	cout << "Code: ";
	cin >> c.code;
	do
	{
		cout << "Credit Hours: ";
		cin >> c.creditHours;
	} while (c.creditHours < 0);
	cout << "Points: ";
	cin >> c.grade;
	cout << "Day (U/M/T/W/R/X: not in schedule yet):" << endl;
	int day;
	cin >> day;
	int slot;
	cout << "Slot (1 (10:00, 12:00) / 2 (01:00, 03:00) / 3 (04:00, 06:00): ";
	cin >> slot;
	cout << "Number of prerequisite courses: ";
	int count;
	cin >> count;
	c.prerequisites = new int[count];
	cout << "Codes of prerequisite courses:" << endl;
	for (int i = 0; i < count; i++)
		cin >> c.prerequisites[i];
}

/**************  Semester  **************/
struct Semester
{
	Course* registeredCourses;
	int totalCreditHours;
	int numberOfCourses;
	float GPA;
	bool currentlyRunning;
};

void main()
{
}
void setSemester(Semester& s)
{
	s.totalCreditHours=0;
	s.numberOfCourses=0;
	s.GPA = 0;
	s.currentlyRunning = false;
	s.registeredCourses = NULL;
}
void setScheduleSize(Semester& S, int courseCount)
{
	S.registeredCourses = new Course[courseCount];
	for (int i = 0; i < courseCount; i++)
	{
		S.registeredCourses[i];
	}
	void addCourse(Semester &s, Course c)
	{
		s.registeredCourses[s.numberOfCourses] = c;
		s.numberOfCourses++;
}
	void startSemester(Semester& s)
	{
		s.currentlyRunning = true;
	}
	void closeSemester(Semester& s)
	{
		s.currrentlyRunning = false;
	}
	fload computeSemesterGPA ()
}
int transformGrade(Course c)
{
	switch (c.grade / 10)
	{
	case 10: {c.grade="A"; break}
	case 9: {}
	}
}
// setSemester
// setScheduleSize
// addCourse
// startSemester
// closeSemester
// computeSemesterGPA
// transformGrade
class Semester
{
private:
	Course* registeredCourses;
	int totalCreditHours;
	int numberOfCourses;
	float GPA;
	bool currentlyRunning;
public:
	 void startSemester()
	{
		currentlyRunning = true;
	}
	Semester()
	{

		totalCreditHours = 0;
		numberOfCourses = 0;
		GPA = 0;
		currentlyRunning = false;
		registeredCourses = NULL;
}
};