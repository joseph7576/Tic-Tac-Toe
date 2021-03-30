#include <iostream>
#include <conio.h>

using namespace std;

//  (odd)    -    1 ---> O ---> 79
//  (even)   -   2 ---> X ---> 88
//
//  X --> 88
//  O --> 79
//
//  int GameShape(){
//
//     cout<<"_|_|_\n_|_|_\n | | ";
//
//     return 0;
//
// }

int GameSwitch(int a, int b,int c,int Array[3][3]){
    if(c % 2 == 0)
    {
        Array[a][b] = 88;
    }
    else
    {
        Array[a][b] = 79;
    }
    return Array[a][b];
}

// int GamePlace(int a){
//
//     if (a == 2)
//     {
//         return 'X';
//     }
//     else
//     {
//         return 'O';
//     }
//
// }

int main(){
    
    int GameBase[3][3] = {0};
    int Try = 0;
    int i = 0, j = 0;
    int x, y;
    char Sw[9];
    
    for(Try;Try<9;Try++){
    
        cout<<" Satre ";
        cin >> x;
        cout<<" Sotone ";
        cin>> y;

        Sw[Try] = GameSwitch(x, y, Try, GameBase);
    
        cout<< Sw[Try] << endl;
    }

    // cout<< endl << Sw[6];
    // cout<< endl << GameBase[1][2];
    getch();
    return 0;

}   

