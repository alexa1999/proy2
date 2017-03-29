#include <iostream>

using namespace std;

int main()
{
    float x;
    float p =3.14;
    cout << "ingrese radio del circulo:" << endl;
    cin >> x;
    cout << "el area del circulo es :"<< p*x*x<< endl;

    int c;
    cout << " ingrese el del cuadrado:" << endl ;
    cin >> c;
    cout << "el area del cuadrado :" << c*c endl ;

    int r;
    cout << " ingrese la base del rectangulo:" << endl ;
    cin >> c;
    int a;
    cout << "ingrese la altura del rectangulo :" <<  endl ;
    cin >> a;
    cout << " el area del rectangulo es :" << c*a << endl;

    return 0;

}
int main()
{
    int x =10;
    int y = 20;
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout << "x es igual :" << x << endl ;
    cout << " y es igual :" << y << endl;
    return 0;
}
int main()
{
    int x=10;
    int y=13;
    if(x=x+y){

        y=x-y;
        cout << "y es igual a :" << y << endl;
        x=x-y;
        cout << "xes igual a:"<< x <<endl;

    }

    return 0;
}

int main()
{
    int x;
    cout << "ingrese un numero para x:" << endl;
    cin >> x;
    int y;
    cout << "ingrese un numero para y:"<<  endl;
    cin >> y;
    if (x>y){
        cout << x << "es mayor que " << y << endl;
        }
        else {
            cout<< y<<" es mayor que" << x<< endl;

        }
    return 0;

}
int main()
{
    float num1;
    cout << "ingrese un numero :" << endl;
    cin >> num1;
    float num2;
    cout << "ingrese un numero:"<<  endl;
    cin >> num2;
    float num3;
    cout << "ingrese un numero:" << endl;
    cin >> num3;
    if (num1>num2)
        if (num1>num3)
            cout << "el numero mayor es"<< num1<< endl;


        else
            cout << "el numero mayor es"<< num3<<endl;
    if (num2>num3)
        cout <<"el numero mayor es"<< num2<<endl;
    else
        cout<<"el numero mayor es"<< num3 <<endl;

    return 0;


}

int main()
{
    int c =5;
    int x;
    x=c++ ;
    cout << " x es igual :"<< x << endl;
    return 0;
}
