#include <iostream>
using namespace std;

class two_D{
    int length;
	int width;
	int area;
	
    public :
    	
        two_D (int l,int w)
		{
           this -> length =l;
           this -> width =w;
        }
        
        void square()
		{
            area = length*width;
        }

        int price(){
            square();
            return area*40;
        }
};
class three_D{
    int length,width,height,area;
    public :
        three_D(int l,int w,int h){
            length=l;
            width=w;
            height=h;
        }

        void square(){
            area=2*((length*height + length*width + height*width));
        }

        int price(){
            square();
            return area*60;
        }
};

int main(){
    int length,width,height;

    cout<<"Enter the length and width of the sheet"<<endl;
    cin>>length>>width;
    two_D sheet=two_D(length,width);
    cout<<"\nPrice of sheet\n"<<sheet.price()<<endl;

    cout<<"Enter the length , width and height of the box"<<endl;
    cin>>length>>width>>height;
    three_D box=three_D(length,width,height);
    cout<<"P\nrice of box\n"<<box.price()<<endl;

    return 0;
}


