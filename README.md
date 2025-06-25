# C++ Student Management System 🎓

An Object-Oriented C++ project to manage student records, including adding, removing, updating, and viewing student data.  
The project includes exception handling to manage edge cases such as duplicate student IDs or attempting to update/remove non-existent students.

---

## 📌 Features

- ➕ Add new students with unique IDs  
- ❌ Prevent duplicate student entries  
- 🗑️ Remove existing students  
- 🔄 Update student details (name, age, grade, etc.)  
- 🔍 Retrieve student name or ID  
- 📋 Display all registered students  

---

## ⚠️ Exception Handling

- `DuplicateStudentException` — Raised if a student with the same ID already exists  
- `StudentNotFoundException` — Raised when trying to access or modify a non-existent student

---

## 🧠 Concepts Used

- Object-Oriented Programming (OOP)  
- Custom Exception Classes  
- Class Composition  
- Data Validation  
- Input/Output handling  
- Vector/List-based storage  
- Clear separation of concerns (Student / Management)

---

## ⚙️ How to Run

```bash
g++ student-management.cpp -o student-management
./student-management
