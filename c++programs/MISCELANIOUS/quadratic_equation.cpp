//Given a quadratic equation in the form ax2 + bx + c, find roots of it.
/*nput :  a = 1, b = -2, c = 1
Output:  Roots are real and same
              1

Input :  a = 1, b = 7, c = 12
Output:  Roots are real and different
              -3, -4

Input :  a = 1, b = 1, c = 1
Output:  Roots are complex 
              -0.5 + i1.73205
              -0.5 – i1.73205
              
1. If b*b < 4*a*c, then roots are complex (not real).
Example: 
roots of x2 + x + 1, roots are: 
-0.5 + i0.86603 and -0.5 – i0.86603

2. If b*b == 4*a*c, then roots are real and both roots are same.
Example: 
roots of x2 – 2x + 1 are 1 and 1

3. If b*b > 4*a*c, then roots are real and different.
Example:
roots of x2 – 7x – 12 are 3 and 4

*/ 


//MY CODE
#include<iostream>
#include<cmath>
using namespace std;

void roots(int a,int b,int c){
    //check the value of a if a ==0 then it is invalid
    if(a==0){
        cout<<"Equation is invalid";
        return; 
    }

    //Calcualte root one r1
    int v=(b*b)-(4*a*c);
    int square_root=sqrt(v);
    int r1=(-b+square_root)/(2*a);

    //calcualte root second r2;
    int r2=(-b-square_root)/(2*a);

    if(v>0){
        cout<<"Roots are real and different:r1="<<r1<<" "<<"r2="<<r2<<endl;
    }
    else if(v==0){
        cout<<"Roots are real and same:r1="<<r1<<" "<<"r2="<<r2<<endl;
    }
    else{
        cout<<"Roots are complex:r1="<<r1<<" "<<"r2="<<r2<<endl;
    }
}


int main(){
    int a = 1, b = -7, c = 12;
    roots(a,b,c);
    return 0;
}





//PROVIDED CODE
#include <bits/stdc++.h>
using namespace std;

// Prints roots of quadratic equation
// ax*2 + bx + x
void findRoots(int a, int b, int c)
{
    // If a is 0, then equation is
    // not quadratic, but linear
    if (a == 0) {
        cout << "Invalid";
        return;
    }

    int d = b * b - 4 * a * c;
    double sqrt_val = sqrt(abs(d));

    if (d > 0) {
        cout << "Roots are real and different ";
        cout << (double)(-b + sqrt_val) / (2 * a) << " "
             << (double)(-b - sqrt_val) / (2 * a);
    }
    else if (d == 0) {
        cout << "Roots are real and same ";
        cout << -(double)b / (2 * a);
    }

    // d < 0
    else {
        cout << "Roots are complex ";
        cout << -(double)b / (2 * a) << " + i"
             << sqrt_val / (2 * a) << " "
             << -(double)b / (2 * a) << " - i"
             << sqrt_val / (2 * a);
    }
}

// Driver code
int main()
{
    int a = 1, b = -7, c = 12;

    // Function call
    findRoots(a, b, c);
    return 0;
}
