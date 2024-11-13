//Betty Phipps 0002 Fall 2024
//Base class "student" storing student grade information and derived classes

//base class, common data
class Student{

    protected:
        //accessors for class data
        const char* getFullName() const; //getter for firstName and lastName

    public:
        enum course {biology, theater, compsci}; //names to integer values 0,1,2 to represent a course student is in
        course getCourse() const; //public getter for course

    private:
        char firstName[20], lastName[20]; //storing char array with max size 20 for first and last name
        course studentCourse;
};



//derived class biology student
class biologyStudent : public Student{
    public:

    private:
        double labGrade, finalExam; // lab 30%, final 25%
        double termTest1, termTest2, termTest3; // term tests 15%
};


//derived class theater student
class theaterStudent : public Student{
    public:

    private:
        double participation, midterm, finalExam; //participation 40%, midterm 25%, final 35%
};
//dervied class computer science student
class CompSci : public Student{
    public:

    private:
        double programAverage; //average 30%
        double test1, test2, finalExam; // tests are 20%, final exam grade is 30%
};