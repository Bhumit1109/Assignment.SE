#include<stdio.h>
int main()
{
	int maths,physics,chemistry;
	int total_marks,total_m_p;
	printf("Enter marks for maths: ");
	scanf("%d",&maths);
	printf("Enter marks for physics: ");
	scanf("%d",&physics);
	printf("Enter marks for chemistry: ");
	scanf("%d",&chemistry);
	total_marks=maths+physics+chemistry;
	printf("Total marks: %d\n",total_marks);
	total_m_p=maths+physics;
	printf("Total marks of maths and physics: %d\n",total_m_p);
	if((maths>=65 && physics>=55 && chemistry>=50 && total_marks>=190) || (total_m_p>=140))
	{
		printf("Candidate is Eligible for admission.");
	}
	else{
		printf("Candidate is not Eligible for admission.");
	}
	return 0;
}
