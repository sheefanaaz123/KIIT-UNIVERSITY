#include <iostream>
#include <math.h>

using namespace std;

class three_d{
    int x1,x2,y1,y2,z1,z2;
    
    public :
        
        three_d(int x1,int x2,int y1,int y2,int z1,int z2){
            this->x1=x1;
            this->x2=x2;
            this->y1=x1;
            this->y2=y2;
            this->z1=z1;
            this->z2=z2;
        }
        
        // Euclidean distance
        void eucilideanDistance(){
            double data=sqrt(pow(x2-x1,2)+pow(y2-y1,2)+pow(z2-z1,2));
            cout<<data<<endl;
        }

        //Manhattan distance
        void manhattanDistance(){
            double data=(x2-x1)+(y2-y1)+(z2-z1);
            cout<<data<<endl;
        }
};

int main(){
    int x1,x2,y1,y2,z1,z2;
    cout<<"Enter the values"<<endl;
    cin>>x1>>x2>>y1>>y2>>z1>>z2;
    three_d td=three_d(x1,x2,y1,y2,z1,z2);
    td.eucilideanDistance();
    td.manhattanDistance();
    
    return 0;
}
