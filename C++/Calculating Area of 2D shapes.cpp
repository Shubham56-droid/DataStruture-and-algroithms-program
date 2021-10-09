#include <iostream>
#include <conio.h>
#include <math.h>


using namespace std;


int main()

{

    int n;

    float a,b,c,s,lt,bt,side,r,area;

    cout<<"Press 1 for Area of Square\n";

    cout<<"Press 2 for Area of Rectangle\n";

    cout<<"Press 3 for Area of Triangle\n";

    cout<<"Press 4 for Area of Circle\n\n";

    cin>>n;



    switch(n)

    {

        case 1:

            cout<<"Enter the side of square\n";

            cin>>side;

            area=side*side;

            cout<<"Area="<<area;

        break;



        case 2:

            cout<<"Enter the length and breadth of rectangle\n";

            cin>>lt>>bt;

            area=lt*bt;

            cout<<"Area="<<area;

        break;



        case 3:

            cout<<"Enter sides of triangle\n";

            cin>>a>>b>>c;

            s=(a+b+c)/2;

            area=sqrt(s*(s-a)*(s-b)*(s-c));

            cout<<"Area="<<area;

        break;



        case 4:

            cout<<"Enter the Radius of Circle\n";

            cin>>r;

            area=3.14*r*r;

            cout<<"Area="<<area;

        break;

    }

    return 0;

}
