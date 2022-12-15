#include <iostream>
#include<cmath>
using namespace std;

double rad2deg(double r)
    {
        r = r*(180/M_PI) ;
        return r ;
    }   

double deg2rad(double d)
    {
        d = d*(M_PI/180) ;
        return d ;
    }

double findXComponent(double i, double j , double k , double l)
    {
        double m ;
        i = i*cos(k) ;
        j = j*cos(l) ;
        m = i + j ;
        return m ;
    }
double findYComponent(double v, double w , double x , double y)
    {
        double z ;
        v = v*sin(x) ;
        w = w*sin(y) ;
        z = v + w ;
        return z ;
    } 
double pythagoras(double a , double b)
    {
        double c ;
        c = (sqrt(pow(a,2) + pow(b,2))) ;
        return c ;
    }
void showResult(double f , double g)
    {
        cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl ;
        cout << "Length of the resultant vector = " << f << endl ;
        cout << "Direction of the resultant vector (deg) = " << g << endl ;
        cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl ;
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
