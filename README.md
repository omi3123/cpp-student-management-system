🎓 C++ Student Management System

An Object-Oriented **C++** project to manage student records including adding, removing, updating, and viewing student data.  
The system uses **exception handling** to manage edge cases such as duplicate IDs or non-existent student operations.

---

## 📌 Features

- ➕ Add New Students with Unique IDs  
- ❌ Prevent Duplicate Student Entries  
- 🗑️ Remove Existing Students  
- 🔄 Update Student Details (Name, Age, Grade, etc.)  
- 🔍 Retrieve Student by Name or ID  
- 📋 Display All Registered Students

---

## ⚠️ Exception Handling

- `DuplicateStudentException` – Raised if a student with the same ID already exists  
- `StudentNotFoundException` – Raised when trying to access or modify a non-existent student  
- Custom exception classes used for clean, structured error control

---

## 🧠 Concepts Used

- Object-Oriented Programming (OOP)  
- Classes & Objects  
- Custom Exception Classes  
- Class Composition (Student within Management)  
- Input/Output Handling  
- Vector/List-Based Storage  
- Data Validation & Control Flow  
- Clear Separation of Concerns

---

## ⚙️ How to Run

### 💻 Compile
```bash
g++ student-management.cpp -o student-management
▶️ Execute
bash
Copy
Edit
./student-management
📝 Make sure a C++ compiler (like g++) is installed on your system.

📂 File Structure
bash
Copy
Edit
student-management.cpp       # Main source code file
README.md                    # Project documentation
👨‍💻 Author
Muhammad Umair Bashir
📧 umairbashir0319@gmail.com

🪪 License
This project is open-source and free to use for learning, academic, and personal use.
You are allowed to modify and share it with proper credits.
