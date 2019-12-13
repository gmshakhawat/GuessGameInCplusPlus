#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int n,gn,c=1;
    bool guess;
    n=rand()%100;
    guess=false;
    while(!guess)
    {
        cout<<"Enter a Number (0 to 100) : ";
        cin>>gn;
        if(gn==n)
        {
            if(c==1)
            {
                cout<< "you you are too lucky you got the numbet at First Time"<<endl;
            }
            else
            {
                cout<<"Your are Correct \n you try "<<c<< " times to get the number "<<endl;
            }

            guess=true;
        }
        else if(gn>n)
        {
            cout<< "your Entered Number is Higher than the number "<<endl<< "Try again"<<endl;
            c++;
        }
        else
        {
            cout<< "your Entered Number is Lower than the number "<<endl<< "Try again"<<endl;
            c++;
        }
    }

}
