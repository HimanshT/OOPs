#include<iostream>
using namespace std;

class Student
{
protected:
	int roll_number;
public:
	void set_number(int);
	void get_number(void);
};

void Student::set_number(int r)
{
	roll_number=r;
}

void Student::get_number()
{
	cout<<roll_number<<endl;
}

class Exam:public Student
{
 	protected:
 		int physics,chemistry;
 	public:
 		void set_marks(int p,int c);
 		void show_marks();
};

void Exam::set_marks(int p,int c)
{
	physics=p,chemistry=c;
}

void Exam::show_marks()
{
	cout<<"physics "<<physics<<" chemistry "<<chemistry<<endl;
}

class Result:public Exam
{
	float percentage;
public:
	void display()
	{
		get_number();
		show_marks();
		cout<<"your percentage is "<<(chemistry+physics)<<endl;
	}
};

int main()
{
	/*
1. A--->B--->C
2. A is the base class for B and b is the base class for c
3. A--->B---->C is the inheritence path.

	*/
    Result mid_sem;
    mid_sem.set_number(20202036);
    mid_sem.set_marks(40,30);
    mid_sem.display();
	return 0;
}