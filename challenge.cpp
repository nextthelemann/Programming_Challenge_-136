/*
 *Challenge #136[Easy] Student Management
--------------------------------------------------------------------------------------------
 *You are a computer science professor at South Harmon Institute of Technology,
 *and are in dire need of automatic grading! The good news is you have all of your
 *student's assignments in an easy-to-read format, making automation easy!
 *You will be given a list of unique student names, and then a list of their
 *assignment grades. All assignments are based on 20 points and are scored in
 *whole-numbers (integers). All students have received the same number of assignments,
 *so you don't have to worry about managing jagged arrays.
-----------------------------------------------------------------------------------------------
 *@uthor Scott Thelemann
 *
 *@version 1.0 08/13/14
 *
 */

 #include <vector>
 #include <string>
 #include <iostream>

 using namespace std;

 int main() {
 	double students;
 	double assignments;
 	double overall_average;
 	double student_average;
 	double current_average;
 	double overall_total;
 	string current_student;
 	double current_score;
 	double current_total;

 	//read # of students and assignments from input
 	cin >> students >> assignments;

 	vector<string> student_names;
 	vector<double> student_averages;

 	//loop runs for # of total students
 	for(int i = 1; i <= students; ++i) {
 		//first sets current avg and current total to 0
 		//then reads student name from input and adds to student vector
 		current_average = 0, current_total = 0;
 		cin >> current_student;
 		student_names.push_back(current_student);

 		//loop runs for # of total assignments
 		for(int j = 1; j <= assignments; ++j) {
 			//reads current score from input and then adds it to current total score
 			cin >> current_score;
 			current_total += current_score;
 		}
 		//total of students scores is then added to overall total
 		//then current average is figured out by diving current total by # of assignments
 		//the current average is added to the vector student averages 
 		overall_total += current_total;
 		current_average = (current_total / assignments);
 		student_averages.push_back(current_average);
 	}
 	//using overall total divided by # of students then divided by # of assignments we find overall average
 	overall_average = (overall_total / students) / assignments;

 	//program then prints overall average after a blank line that follows the user input
 	cout << endl;
 	cout << overall_average << endl;

 	//loop is used to print the students name with its assignments average followed by a new line for next student
 	for(int i = 0; i < students; ++i) {
 		cout << student_names[i] << " " << student_averages[i] << endl;
 	}
 	return 0;
 }