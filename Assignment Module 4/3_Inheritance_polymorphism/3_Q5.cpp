//3_Q5
#include<iostream>
using namespace std;
class students{
	protected:
		int roll;
		public:
			int getroll()
			{
				cout<<"Enter Roll Number: ";
				cin>>roll;
			}
};
class Test:public students{
	protected:
		int marks_s1,marks_s2;
		public:
			void get_marks()
			{
				cout<<"Enter Marks for 2 Subjects:\n";
				cin>>marks_s1>>marks_s2;
			}
			void display_marks()
			{
				cout<<"Subject 1 Marks: "<<marks_s1<<endl;
				cout<<"Subject 2 marks: "<<marks_s2<<endl;
			}
};
class result:public Test{
	protected:
		int total;
		public:
			void sum()
			{
				total=marks_s1+marks_s2;
			}
			void display_result()
			{
				cout<<"Roll Number: "<< roll <<endl;
				cout<<"Total Marks: "<<total<<endl;
			}
};
int main()
{
	result sr;
	sr.getroll();
	sr.get_marks();
	sr.sum();
	sr.display_marks();
	sr.display_result();
	return 0;
}
