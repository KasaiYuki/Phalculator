#include <iostream>
#include <string>
#include <math.h>       /* pow */
#include <math.h>       /* sqrt */
using namespace std;

float acceleration(float vi, float vf, float ti, float tf){ //defines the variables
    float a; //defines "a" as a variable
    a=(vf-vi)/(tf-ti); //this is the formula used
    cout << a; //cout is short for console out
    return a; //ends this secotion of the programz
}

float displacement(float si, float sf){ //defines the "purpose" of the variable
    float s; //defines "s" as a variable
    s = sf - si; //this is the formula used
    cout << s; //cout is short for console out
    return s; //ends this secotion of the program
}

float distance(float cx, float cy){ //defines the "purpose" of the variable
    float d; //defines "d" as a variable
    d = sqrt(pow(cx,2)+pow(cy,2)); //this is the formula used
    cout << d; //cout is short for console out
    return d; //ends this secotion of the program
}

float finalvelocity(float a, float s, float vi){ //defines the "purpose" of the variable
    float vf; //defines "s" as a variable
    vf=sqrt(2*a*s+pow(vi,2)); //this is the formula used
    cout << vf; //cout is short for console out
    return vf; //ends this secotion of the program
}

float motion(float u, float t, float a){ //defines the variables
    float m; //defines "m" as a variable
    m=u*t+(0.5*a*(pow(t,2))); //this is the formula used
    cout << m; //cout is short for console out
    return m; //ends this secotion of the program
}

float speed(float xi, float xf, float ti, float tf){ //defines the variables
    float v; //defines "v" as a variable
    v=(xf-xi)/(tf-ti); //this is the formula used
    cout << v; //cout is short for console out
    return v; //ends this secotion of the program
}


int main()
{
short int selection;

cout << "Enter the number cooresponding to the desired formula:\n";
cout << "1. Acceleration\n";
cout << "2. Displacement\n";
cout << "3. Distance\n";
cout << "4. Final Velocity\n";
cout << "5. Motion\n";
cout << "6. Speed\n";
cin >> selection;


switch(selection)
{
case 1:
cout << "Enter the initial velocity\n";
    float vinitial;
    cin >> vinitial;
    cout << "Enter the final velocity\n"; //asks the user a question
    float vfinal; //defines the integer the user inputs
    cin >> vfinal; //cin tells the program to use the integer inputed by the user
    cout << "Enter the initial time\n";
    float tinitial;
    cin >> tinitial;
    cout << "Enter the final time\n";
    float tfinal;
    cin >> tfinal;
    acceleration(vinitial, vfinal, tinitial, tfinal);
break;
case 2:
 cout << "Enter the initial position\n";
    float sinitial;
    cin >> sinitial;
    cout << "Enter the final position\n"; //asks the user a question
    float sfinal; //defines the integer the user inputs
    cin >> sfinal; //cin tells the program to use the integer inputed by the user
    displacement(sinitial, sfinal);
break;
case 3:
cout << "Enter the change in X axis\n";
    float changex;
    cin >> changex;
    cout << "Enter the change in Y axis \n"; //asks the user a question
    float changey; //defines the integer the user inputs
    cin >> changey; //cin tells the program to use the integer inputed by the user
    distance(changex, changey);
break;
case 4:
cout << "Enter the rate of acceleration\n";
    float accel;
    cin >> accel;
    cout << "Enter the length of displacement\n"; //asks the user a question
    float displacement; //defines the integer the user inputs
    cin >> displacement; //cin tells the program to use the integer inputed by the user
    cout << "Enter the initial velocity\n";
    cin >> vinitial;
    finalvelocity(accel, displacement, vinitial);
break;
case 5:
cout << "Enter the initial velocity\n";
    cin >> vinitial;
    cout << "Enter the change in time\n"; //asks the user a question
    float time; //defines the integer the user inputs
    cin >> time; //cin tells the program to use the integer inputed by the user
    cout << "Enter the rate of acceleration\n";
    cin >> accel;
    motion(vinitial, time, accel);
break;
case 6:
cout << "Enter the initial position\n";
    float xinitial;
    cin >> xinitial;
    cout << "Enter the final position\n"; //asks the user a question
    float xfinal; //defines the integer the user inputs
    cin >> xfinal; //cin tells the program to use the integer inputed by the user
    cout << "Enter the initial time\n";
    cin >> tinitial;
    cout << "Enter the final time\n";
    cin >> tfinal;
    speed(xinitial, xfinal, tinitial, tfinal);
break;
default:
cout << "Invalid selection\n";
}
return 0;
}

