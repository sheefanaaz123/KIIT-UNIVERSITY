#include <iostream>
using namespace std;
class Distance_8085
{
	private:
		int feet_8085;
		float inches_8085;
	public:
		//entering the data
		void set_8085()
		{
			cout<<"Enter feet: ";
			cin>>feet_8085;
			cout<<"Enter inches: ";
			cin>>inches_8085;
		}
		//addition
		void add_8085(Distance_8085 d1, Distance_8085 d2)
		{
			feet_8085 = d1.feet_8085 + d2.feet_8085;
			inches_8085 = d1.inches_8085 + d2.inches_8085;
		}
		//printing the distance in feet and inches
		void disp_8085()
		{
			cout<<"Distance is "<<feet_8085<<" feet "<<inches_8085<<" inches"<<endl;
		}
		
};
int main()
{
	Distance_8085 d1, d2, d3;
	d1.set_8085();
	d2.set_8085();
	d3.add_8085(d1, d2);
	d3.disp_8085();
	return 0;
}
