# 🎓 Student Result Management System in C++

A simple command-line program to input and display student details including name, roll number, marks, and calculated grade.

## Features

- Input multiple students' details: name, roll number, and marks.
- Automatically calculates the grade based on marks:
  - A: 90 and above
  - B: 75 to 89
  - C: 60 to 74
  - D: 40 to 59
  - F: below 40
- Displays a neatly formatted report with all students’ details.
- Uses C++ Standard Library features like vectors, strings, and iomanip for formatting.

## Usage

1. Clone the repository or download the source code file.

2. Compile the program with a C++ compiler. For example:
   ```bash
   g++ -o student_result student_result.cpp
3. Run the executable:
   ```bash
   ./student_result
4. Follow the prompts to enter the number of students and their details.

## Example

```
Enter number of students: 2

--- Enter Details for Student 1 ---
Enter Name: Alice Johnson
Enter Roll Number: 101
Enter Marks (out of 100): 85

--- Enter Details for Student 2 ---
Enter Name: Bob Smith
Enter Roll Number: 102
Enter Marks (out of 100): 72

================== Student Report ==================
Name                 Roll No   Marks     Grade
----------------------------------------------------
Alice Johnson        101       85        B    
Bob Smith            102       72        C    
====================================================
```

## How Grades Are Calculated

```
| Marks Range  | Grade |
| ------------ | ----- |
| 90 and above | A     |
| 75 - 89      | B     |
| 60 - 74      | C     |
| 40 - 59      | D     |
| Below 40     | F     |
```
   
## License

This project is licensed under the MIT License - see the [LICENSE](https://github.com/ggsurya/Cpp-Projects/blob/main/LICENSE) file for details.

## 📩 Contact

**G.G. Surya**  
📧 Email: ggsuryaff@gmail.com  
🔗 [LinkedIn](https://www.linkedin.com/in/g-g-surya-5aa9312b4)
🔗 [GitHub](https://github.com/ggsurya)
