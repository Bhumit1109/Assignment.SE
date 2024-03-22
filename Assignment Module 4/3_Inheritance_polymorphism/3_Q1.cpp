//3_Q1
#include<iostream>
#include<string>
using namespace std;
class Cricketer{
protected:
    string name;
    int age;
public:
    void input_data()
	{
        cout<<"Enter name: ";
        getline(cin,name);
        cout<<"Enter age: ";
        cin>>age;
    }
};
class Batsman:public Cricketer
{
private:
    int total_runs;
    float average_runs;
    int best_performance;
    int total_matches;
public:
    void input_data()
	{
        Cricketer::input_data();
        cout<<"Enter total runs: ";
        cin>>total_runs;
        cout<<"Enter Total Matches Played: ";
        cin>>total_matches;
        cout<<"Enter best performance: ";
        cin>>best_performance;
    }
void calculate_average_runs()
{
    average_runs=total_runs/total_matches;
}
void display_data()
    {
        cout<<"\nName: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Total runs: "<<total_runs<<endl;
        cout<<"Average runs: "<<average_runs<<endl;
        cout<<"Best performance: "<<best_performance<<endl;
    }
};
int main()
{
    Batsman player;
    cout<<"Enter Batsman's details:"<<endl;
    player.input_data();
    player.calculate_average_runs();
    cout<<"\nBatsman's details:"<<endl;
    player.display_data();
    return 0;
}


