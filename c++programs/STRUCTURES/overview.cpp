/*Arrays are used to store sets of data of similar data types at contiguous memory locations. Unlike Arrays, Structures are user-defined data types that are used to store groups of items of non-similar data types. Here, we are going to compile a C++ program that will store the information of the students in a Structure.

Information in Structure
Student Name (String).
Student Roll Number (String).
Subjects Enrolled (Array of Strings).
Marks in each subject (Array of Int).
CGPA(Float)*/
#include<iostream>
#include<vector>
#include<string>
using namespace std;

struct student{
    string name;
    int rollno;
    vector<int>marks;
    vector<string>subjects;
    float cgpa;
};

template <typename T>void printv(const vector<T> &v){
    cout<<"[";

//for iterating all over the element
    for(auto elem :v){
        cout<<elem<<" ";
    }
    cout<<"]";
    cout<<endl;
}

//function to print the structure element
void pritnstudent(student *s){
    cout<<"Student detatils::"<<endl;
    cout<<endl;
    cout<<"Name::"<<s->name<<endl;
    cout<<"rollno::"<<s->rollno<<endl;
    cout<<"Subjects::";
    printv(s->subjects);
    cout<<"Marks::";
    printv(s->marks);
    cout<<"CGPA::"<<s->cgpa<<endl;
}

int main(){
    student s;

    //declare all the information here related to structure for further execution of the code or program
    s.name="SimranjitSingh";
    s.rollno=1234;
    s.subjects={"DSA","OOPS","DBMS","WT"};
    s.marks={89,67,90,95};//The issue is that the integer 09 is interpreted as an octal (base-8) constant by the C++ compiler because it has a leading zero. In octal notation, only the digits 0-7 are valid, so 09 is not a valid octal number.
    s.cgpa=8.9;

    pritnstudent(&s);
    return 0;
}