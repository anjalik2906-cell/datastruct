#include<iostream>
#include<cmath>
using namespace std;
struct Point{
    int x;
    int y;
};
int triangle(Point *point1, Point *point2){
    return sqrt((point1->x -point2->x)*(point1->x-point2->x) +(point1->y -point2->y)*(point1->y-point2->y));
}
int rightTriangle(Point *p1, Point *p2, Point *p3){
    double a=triangle(p1,p2);
    double b=triangle(p2,p3);
    double c=triangle(p3,p1);
    if(a*a +b*b==c*c || b*b +c*c==a*a || a*a +c*c==b*b){
        return 1;

    }
    else{
        return 0;
    }
}


int main(){
    Point p1,p2,p3;
    cin>>p1.x>>p1.y;
     cin>>p2.x>>p2.y;
      cin>>p3.x>>p3.y;
      if(rightTriangle(&p1,&p2,&p3)){
        cout<<"1"<<endl;
      }
      else{
        cout<<"0"<<endl;
      }
    return 0;
}