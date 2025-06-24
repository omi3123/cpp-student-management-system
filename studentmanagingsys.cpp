#include <iostream>
#include <unordered_map>
#include <string>
#include <stdexcept>
using namespace std;
class DuplicateStudent : public exception {
    string message;
public:
    DuplicateStudent(string msg) : message(msg) {}
    const char* what() const noexcept override {
        return message.c_str();
    }
};
class StudentNotFound : public exception {
    string message;
public:
    StudentNotFound(string msg) : message(msg) {}
    const char* what() const noexcept override {
        return message.c_str();
    }
};
class Student {
private:
    string name;
    int age;
    int student_id;
    string grade;
public:
    Student(string n, int a, int id, string g) {
        name = n;
        age = a;
        student_id = id;
        grade = g;
    }
    void update_details(string new_name = "", int new_age = -1, string new_grade = "") {
        if (!new_name.empty())
            name = new_name;
        if (new_age != -1)
            age = new_age;
        if (!new_grade.empty())
            grade = new_grade;

        cout << "Updated details of student ID: " << student_id << endl;
    }
    void display() const {
        cout << "ID: " << student_id << ", Name: " << name
             << ", Age: " << age << ", Grade: " << grade << endl;
    }
    int get_id() const {
        return student_id;
    }
    string get_name() const {
        return name;
    }
};
class School {
private:
    unordered_map<int, Student> students;
public:
    void add_student(string name, int age, int id, string grade) {
        if (students.find(id) != students.end())
            throw DuplicateStudent("Student with ID " + to_string(id) + " already exists.");
        Student s(name, age, id, grade);
        students[id] = s;
        cout << "Added student: " << name << endl;
    }
    void remove_student(int id) {
        if (students.find(id) == students.end())
            throw StudentNotFound("Student with ID " + to_string(id) + " not found.");
        
        cout << "Removed student: " << students[id].get_name() << endl;
        students.erase(id);
    }
    void update_student(int id, string name = "", int age = -1, string grade = "") {
        if (students.find(id) == students.end())
            throw StudentNotFound("Student with ID " + to_string(id) + " not found.");

        students[id].update_details(name, age, grade);
    }
    void display_students() const {
        if (students.empty()) {
            cout << "No students to display." << endl;
        } else {
            for (const auto& pair : students) {
                pair.second.display();
            }
        }
    }
};
int main() {
    try {
        School school;
        school.add_student("Alice", 14, 1, "9th");
        school.display_students();

        school.update_student(1, "", 15, "10th");
        school.display_students();
    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}