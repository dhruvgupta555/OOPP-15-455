 #include <iostream>
using namespace std;

class Student {
private:
    int marks;

public:
    static int count;

    Student(int m) {
        marks = m;
        count++;
    }

    friend void display(Student s);
};

int Student::count = 0;

void display(Student s) {
    cout << "Marks: " << s.marks << endl;
}

int main() {
    Student s1(80), s2(90);

    display(s1);
    display(s2);

    cout << "Total Students: " << Student::count << endl;

    return 0;
}
