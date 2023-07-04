#include<iostream>

using namespace std;

struct employee_8085
{
	int code_8085;
	char name_8085[30];
	int doj_8085[3];
};

void print_8085(struct employee_8085 e)
{
		cout<<"\nName : "<<e.name_8085;
}

int main()
{
	//details
  struct employee_8085 emp[50] = {

	123, "ABC", 24, 10,1989,
	456, "XYZ", 18, 8,2018,
	789, "PQR", 4, 10, 2001,
	987, "MNO", 8, 11, 1992,
	898, "OPQ", 7, 12, 2003
};

	int i_8085, d_8085, m_8085, y_8085;
	
	cout<<"Enter the current date in DD MM YYYY format : ";
	cin>> d_8085>> m_8085 >> y_8085;
	cout<<"\nName of Employees with greater than or equal to 3 years of tenure\n\n";
	
	//printing the names of employee with greater or equal to 3 years of tenure
	
	for (i_8085 = 0; i_8085 < 5; i_8085++)
	{
		if (y_8085- emp[i_8085].doj_8085[2] > 3)
			print_8085(emp[i_8085]);
		else if (y_8085 - emp[i_8085].doj_8085[2] == 3)
		{
			if (m_8085 - emp[i_8085].doj_8085[1] > 0)
				print_8085(emp[i_8085]);
			else if (emp[i_8085].doj_8085[1] == m_8085)
			{
				if (d_8085 - emp[i_8085].doj_8085[0] >= 0)
					print_8085(emp[i_8085]);

			}
		}
	}
	return 0;
}


