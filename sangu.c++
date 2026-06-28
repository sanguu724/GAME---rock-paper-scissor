#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));
    string ch[]={"Rock","Paper","Scissors"};
    int user, comp=rand()%3;

    cout<<"1.Rock\n2.Paper\n3.Scissors\nChoose: ";
    cin>>user;

    cout<<"You: "<<ch[user]<<"\nComputer: "<<ch[comp]<<endl;

    if(user==comp) cout<<"Draw!";
    else if((user==1&&comp==3)||(user==2&&comp==1)||(user==3&&comp==2))
        cout<<"You Win!";
    else
        cout<<"Computer Wins!";
}
