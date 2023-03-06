#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
    int number,guess,nguesses=1;
    srand(time(0));
    number = rand()%100+1;
    //cout<<"The random number is: "<< number <<endl;
    cout<<"----WELCOME TO THE GAME OF GUESSING THE NUMBERS----"<<endl;

    do
    {
        cout << "Guess The number between 1 to 100: ";
        cin>>guess;
        if(guess>number)
        {
            cout<<"Enter lower number please"<<endl;
        }
        else if(guess<number)
        {
            cout<<"Enter Higher number please"<<endl;
        }
        else
        {
            cout<<"You guessed in " << nguesses << " attempts" << endl;
        }
        nguesses++;
    }
    while (guess != number);
    return 0;
}