#include <iostream>

using namespace std;

int main()
{
    int score[6];
    int c = 5;
/*
    for(int i=0;i<10;i++)
    {
        cout<<"position["<<i<<"] = "<< inventory[i] <<endl;
    }

*/
    score[0] = c++;
    score[1] = c++;
    score[2] = c++;
    score[3] = c++;
    score[4] = c++;
    score[5] = c++;


    cout<<"position["<<0<<"] = "<< score[0] <<endl;
    cout<<"position["<<1<<"] = "<< score[1] <<endl;
    cout<<"position["<<2<<"] = "<< score[2] <<endl;
    cout<<"position["<<3<<"] = "<< score[3] <<endl;
    cout<<"position["<<4<<"] = "<< score[4] <<endl;
    cout<<"position["<<5<<"] = "<< score[5] <<endl;

    return 0;
}
