//C++ Programming - From Problem Analysis to Program Design 8th Edition
// Chapter 2 - Exercise 5
// cekker@me.com
//Description: Write a program to input each of Fred's scores for each of the the five grade components. Calculate his class grade based on the percentages assigned to each item.
//
#include <iostream>

using namespace std;

int main() {
    // Declare varaibles and data type
    float midTerm, finalExam, researchPaper, groupProject, participation;
    
    //initilizae the variable by adding a value to them
    midTerm = 80;
    finalExam = 70;
    researchPaper = 75;
    groupProject = 90;
    participation = 100;

    //declare and initialize the weightedAverage 
    float weightedAverage = .25 * midTerm + .25 * finalExam + .20 * researchPaper + .20 * groupProject + .10 * participation;

    cout << "Fred's Midterm grade was: "<< midTerm << endl;
    cout << "Fred's Final Exam grade was: " << finalExam << endl;
    cout << "Fred's Research Paper grade was: " << researchPaper << endl;
    cout << "Fred's Group Project grade was: " << groupProject << endl;
    cout << "Fred's Participation grade was: "<< participation << endl;
    cout << "Fred's Final grade was: " << weightedAverage << endl;

     
    return 0;
}
