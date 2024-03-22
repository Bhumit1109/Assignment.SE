//2_Q7
#include<iostream>
using namespace std;
class Date{
	int day,month,year;
	public:
		Date(){}
		int getday()
		{
			cout<<"Enter Day: ";
			cin>>day;
		}
		int getmonth()
		{
			cout<<"Enter Month: ";
			cin>>month;
		}
		int getyear()
		{
			cout<<"Enter Year: ";
			cin>>year;
		}
		int isvalid()
		{
			if(year<0)
			{
				cout<<"Year cannot be negative.";
				return -1;
			}
			if(month<1 || month>12)
			{
				cout<<"Month should be between 1 and 12.";
				return -1;
			}
			if(day<1)
			{
				cout<<"Day cannot be less than 1.";
				return -1;
			}
			int max=31;
			if(month==4 || month==6 || month==9 || month==11)
			max=30;
			else if(month==2)
			{
				if((year%4==0 && year%100!=0) || (year%400==0))
				max=29;
				else
				max=28;
			}
			if(day>max)
			{
				cout<<"Days should not be more than maximum days for Given month.";
				return -1;
			}
			return 1;
		}
};
int main()
{
	Date date;
	date.getday();
	date.getmonth();
	date.getyear();
	int valid;
	valid=date.isvalid();
	if(valid==1)
	{
		cout<<"\nDate is Valid.";
	}
	else{
		cout<<"\nDate is Invalid.";
	}
	return 0;
}
