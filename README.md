# Project.6_StudentList
Set of classes for storing student information, along with a class that will manage a list of students. Data can be imported from files for storage in the list, and summary reports with computed final grades will be printed to output files.

## Objective
Gain experience with base and derived classes, virtual functions, polymorphism, file I/O, and dynamic memory allocation by designing a system to manage and process student data, categorized by course.

## Project Overview
The program manages a list of students divided into three categories: Biology, Theater, and Computer Science. Each course has unique grading criteria, and the program computes final grades and generates summary reports.

## Class Structure
- **Student (Base Class)**: Stores common information (first name, last name, course) for all students.
- **Derived Classes**: 
  - `BiologyStudent`: Computes final grade based on lab and test grades.
  - `TheaterStudent`: Computes final grade based on participation, midterm, and final exam.
  - `CSStudent`: Computes final grade using a program average, tests, and final exam.

- **StudentList**: Manages a dynamic list of students and includes methods for file import/export, displaying students, and (optional) sorting.

## Key Features
1. **Import Data from File**: Reads student data from a file, adding entries to the list.
2. **Display Student List**: Shows student names and course in a concise format.
3. **Generate Grade Report**: Exports a report with each student’s name, final exam score, final average, and letter grade, organized by course.
4. **Sort Student List**: (Extra Credit) Alphabetically sorts students by last name and first name.

## User Menu
*** Student List Menu *** I Import students from a file S Show student list (brief) E Export a grade report (to file) M Show this Menu O Sort student list (extra credit) Q Quit Program


## File Formats
- **Input File**: Contains student count, names, course type, and grades.
- **Output File**: Lists each student's name, final exam score, final average, letter grade, organized by course, with a grade distribution at the end.

## Additional Requirements
- **Memory Management**: Uses dynamic allocation to adjust list size as needed.
- **Data Privacy**: Class data is private/protected and accessed via public functions.
- **Portability**: Tested for compatibility with g++ compiler.

## Extra Credit
- **Sort Option**: Adds an option to alphabetically sort the list.