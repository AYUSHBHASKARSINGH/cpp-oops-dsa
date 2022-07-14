#include<iostream>
#include<cmath>
using namespace std;

class point{
        public:
        int x,y;
        friend void distancePoint(point , point);
        point(int a, int b){
             x=a;
             y=b;
         }

         void displaypoint(){
             cout<<"the point is ("<<x<<","<<y <<")"<<endl;
         }
};

void distancePoint(point obj1, point obj2)
{
    double dis;
    dis = sqrt(pow((obj2.x - obj1.x), 2) + pow((obj2.y - obj1.y), 2));
    cout << dis << endl;
}
int main(){
    point p(1,5);
    point q(22,-1);
    
    p.displaypoint();
    q.displaypoint();

    distancePoint(p,q);
    return 0;
}