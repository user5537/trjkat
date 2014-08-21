#include <iostream>

using namespace std;

bool czy(double a, double b, double c)

{
if(a<=0 || b <=0 || c<=0) return false;
return true;
}


bool test()
{
    if(czy(0,2,-3) !=false) cout <<"problem 1"<<endl;
    if(czy(1,2,3) !=false) cout <<"problem 2"<<endl;
    if(czy(2,2,2) !=true) cout <<"problem 3"<<endl;
}



int main()
{
#ifdef TESTY;

#else
    double a;
    double b;
    double c;


    cin >>a;
    cin >>b;
    cin >>c;

    if(czy(a,b,c)) ==false) cout << "nie";
        cout << "jest trojkatem"<< endl;

 #endif // TESTY    return 0;



 test();
 int a,b,c=0;
 cin>>a;
 cin>>b;
 cin>>c;

    if(a+b>c)
        {
        if(a+c>b)\
            {
            if(b+c>a)
            cout<<"bedzie trojkat"<<endl;
            }
      else
      return 0;
        }
    else
    return 0;


}
