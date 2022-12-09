#include <iostream>
#include <cmath>
using namespace std;

double deg2rad(double deg){return (M_PI/180)*deg ;}
double rad2deg(double rad){return (180/M_PI)*rad ;}

double findXComponent(double x1, double x2, double ang1, double ang2){
return x1*cos(ang1)+x2*cos(ang2);
}

double findYComponent(double y1, double y2, double mum1, double mum2){
return y1*sin(mum1)+y2*sin(mum2);
}

double pythagoras(double py1, double py2){
return sqrt(pow(py1,2)+pow(py2,2));
}

double showResult(double length, double direct){
cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
cout << "Length of the resultant vector = " << length << "\n";
cout << "Direction of the resultant vector (deg) = " << direct << "\n";
cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
return 0;
}


int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}