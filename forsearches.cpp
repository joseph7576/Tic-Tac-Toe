#include <iostream>
#include <conio.h>

using namespace std;

//  (odd)    ----|    1 ---> O ---> 79
//  (even)   ---- |   2 ---> X ---> 88

//  +++++++++++++++++++++++++++++++++++++++++

//  X --> 88
//  O --> 79

int WinCheck(int a[3][3]){

    // | - - - | [i][j]

    int Check[3] = {0};
    
    for(int i=0;i<3;i++){
        for (int j=0; j<3; j++)
        {
            //cout<<i<<j<<"-";
            Check[j] = a[i][j];
        }
        //cout<<Check[0]<<Check[1]<<Check[2]<<endl;
        if(Check[0] == Check[1] && Check[0] == Check[2] && Check[1] == Check[2]){
            cout<<"-W-I-N-";
        }
    }

    cout<<"-------------------- \n";

    for(int i=0;i<3;i++){
        for (int j=0; j<3; j++)
        {
        //    cout<<j<<i<<"-";
            Check[j] = a[j][i];
        }
        //cout<<Check[0]<<Check[1]<<Check[2]<<endl;
        if(Check[0] == Check[1] && Check[0] == Check[2] && Check[1] == Check[2]){
            cout<<"|W|N|";
        }
    }
    
    cout<<"-------------------- \n";

    for (int i = 0; i < 3; i++)
    {
       // cout<<i<<i<<"-";
        Check[i] = a[i][i];
    }
    //cout<<Check[0]<<Check[1]<<Check[2]<<endl;
    if(Check[0] == Check[1] && Check[0] == Check[2] && Check[1] == Check[2]){
            cout<<"X1WIN";
        }
    cout<<"-------------------- \n";

    // array[2][0] | array[1][1] | array[0][2]
    //cout<<a[2][0]<<a[1][1]<<a[0][2]<<endl;
    if(a[2][0] == a[1][1] && a[2][0] == a[0][2] && a[1][1] == a[0][2]){
        cout<<"X2WIN";
    }
}

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
    
        // cout<< Sw[Try] << endl;
        cout<<"----------- \n";
    }

    WinCheck(GameBase);

    getch();
    return 0;

}