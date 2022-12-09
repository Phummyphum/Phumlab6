#include <iostream>
#include <cmath>
#include <string>
using namespace std;
double l1, l2, a1, a2, xcomp, ycomp, result_vec_length, result_vec_direction;
double deg2rad(double deg){
    return deg*M_PI/180;
}
double  rad2deg(double rad){
    return rad*180/M_PI;
}
double findXComponent(double xl1,double xl2,double xd1,double xd2){
        return xl1*cos(xd1)+xl2*cos(xd2);
}
double findYComponent(double yl1,double yl2,double yd1,double yd2){
         return yl1*sin(yd1)+yl2*sin(yd2);
}
double pythagoras(double xcomp,double ycomp){
        return sqrt(pow(xcomp,2)+pow(ycomp,2));
}
double showResult(double result_vec_length, double result_vec_direction){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    cout << "Length of the resultant vector" << " = " << result_vec_length;
    cout << "\nDirection of the resultant vector (deg)" << " = " << result_vec_direction;
       cout << "\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
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
