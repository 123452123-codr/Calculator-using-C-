#include<iostream.h>
#include<conio.h>
void main()
{
    char op;
    float a,b;
    cout<<"Enter the first number:";
    cin>>a;
    cout<<"Enter the operator:";
    cin>>op;
    cout<<"Enter the second number:";
    cin>>b;
    switch(op)
    {
        case '+':
            cout<<a+b;
            break;
        case '-':
            cout<<a-b;
            break;
        case '*':
            cout<<a*b;
            break;
        case '/':
            cout<<a/b;
            break;
        default:
            cout<<"Error! Invalid  input!";
            break;
    }
    getch();
}
