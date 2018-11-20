#include <iostream>
using namespace std;
void fib(int fibo[20]);
void fibprint(int fibo[20]);
int main()
{
int fibo[20];
fib(fibo);
fibprint(fibo);
return 0;
}
void fib(int fibo[20])
{
   int i;
   fibo[0]=fibo[1]=1;
  
  for(i=2;i<20;i++)
    fibo[i]=fibo[i-1]+fibo[i-2];
}

void fibprint(int fibo[20])
{
    int i;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(8);	
     for(i=2;i<20;i++)
        cout<<"\n"<<fibo[i];
}
