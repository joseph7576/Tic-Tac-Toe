#include <iostream>
#include <conio.h>

using namespace std;


//  (odd) -    1 ---> O
//  (even) -   2 ---> X
//
//
//
// int GameShape(){
    
//
//     cout<<"_|_|_\n_|_|_\n | | ";
//
//     return 0;
// }

int main(){
    
    int GameBase[3][3] = {0};
    int Try = 0;
    int i = 0, j = 0;
    int x, y;
    
    cin >> x >> y;
    //cout << x << endl;
    //GameSwitch(x, y, Try, GameBase[0][0]);
    
    if(Try % 2 == 0){
        GameBase[x][y] = 2;
    }
    else
    {
        GameBase[x][y] = 1;
    }
  
    //return GameBase[x][y];
    
    if (GameBase[x][y] = 0)
    {
        /* code */
    }
    

    // cout<<GameBase[1][2];
    // GameShape();
    
    getch();
    return 0;
}



// int GameSwitch(int a, int b,int c,int Array[3][3]){
//
//     if(c % 2 == 0){
//         Array[a][b] = 2;
//     }
//     else
//     {
//         Array[a][b] = 1;
//     }
//  
//     return Array[a][b];
// }
