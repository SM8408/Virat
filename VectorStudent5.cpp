//5:Defines a Student class with attributes like name, age, and grade.
//  Initializes a vector of Student objects.
//  Allows the user to add new students to the vector with their name, age, and grade.
//  Prints the list of students.

#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

class Student
{
	private:
		string name;
		int age;
	
	public:
		Student()
		{
			cout<<"Default Student constr"<<endl;
//			cout<<"Parameter Student constr"<<endl;
//			this->name = name;
//			this->age = age;
		}
		
	void addData()
	{
		cin>>name>>age;
	}
	
	void display()
	{
		cout<<"Name= "<<name<<"  Age= "<<age<<endl;
	}		
		
};

int main()
{
	vector<Student*> myStud;
	int vecsize, ch;
	cout<<"Enter vector size"<<endl;
	cin>>vecsize;
	cout<<"1.AddStudent  2.DisplayStudent  3.RemoveStudent"<<endl;
	Student s1;
	do
	{
		cout<<"Enter choice"<<endl;
		cin>>ch;
		
		switch(ch)
		{
			case 1:
			{
				cout<<"Enter student Name and age"<<endl;
				for(int i=0; i<vecsize; i++)
				{
					s1.addData();
					myStud.push_back(&s1);
				}
			
				cout<<"Student is entered"<<endl;
				break;
			}
			
			case 2:
			{
				//s1.display();
				//int size1 = myStud.size();
				for (int i=0; i<vecsize; i++)
				{
					myStud[i]->display();
				}
				
				break;
			}
			
			case 3:
			{
				for(int i=0; i<vecsize; i++)
				{
					myStud.pop_back();
				}
				cout<<"Student is removed"<<endl;
				break;
			}
				
		}
		
	}while(ch!=4);
	
	return 1;
}
