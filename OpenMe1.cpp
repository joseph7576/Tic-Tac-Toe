#include <iostream>
#include <conio.h>

using namespace std;

//  (odd)    ----|    1 ---> O ---> 79
//  (even)   ---- |   2 ---> X ---> 88

//  +++++++++++++++++++++++++++++++++++++++++

// ASCII CODES
//
//  X --> 88
//  O --> 79
//  WhiteSpace --> 32
//

///////////////////// DO NOT LOOK AT label!!!    
int CHCH(int c,int b,char a[3][3]){

    int Check[3];

    for(int i=0;i<3;i++){
        for (int j=0; j<3; j++)
        {
            Check[j] = a[i][j];
        }
    }

}
void GameShape(char s[3][3]){
    
    std::cout<<"\n\n\n\t  1     2     3  "<<endl<<"\t-----------------\n";
    std::cout<<"     A |  "<<s[0][0]<<"  |  "<<s[0][1]<<"  |  "<<s[0][2]<<"  "<<endl<<"       | ----|-----|-----"<<endl;
    std::cout<<"     B |  "<<s[1][0]<<"  |  "<<s[1][1]<<"  |  "<<s[1][2]<<"  "<<endl<<"       | ----|-----|-----"<<endl;
    std::cout<<"     C |  "<<s[2][0]<<"  |  "<<s[2][1]<<"  |  "<<s[2][2]<<"  "<<endl<<"\n\n";

}

// Done ??
int WinCheck(char a[3][3]){

    // | - - - | [i][j]

    int Check[3] = {0};
    
    for(int i=0;i<3;i++){
        for (int j=0; j<3; j++)
        {
            Check[j] = a[i][j];
        }
        if(Check[0] == Check[1] && Check[0] == Check[2] && Check[1] == Check[2] && Check[1] > 70){
            return 1;
        }
    }

    for(int i=0;i<3;i++){
        for (int j=0; j<3; j++)
        {
            Check[j] = a[j][i];
        }
        if(Check[0] == Check[1] && Check[0] == Check[2] && Check[1] == Check[2] && Check[1] > 70){
            return 1;
        }
    }
    
    for (int i = 0; i < 3; i++)
    {
        Check[i] = a[i][i];
    }
    if(Check[0] == Check[1] && Check[0] == Check[2] && Check[1] == Check[2]  && Check[1] > 70){
            return 1;
        }
    
    // array[2][0] | array[1][1] | array[0][2]
    if(a[2][0] == a[1][1] && a[2][0] == a[0][2] && a[1][1] == a[0][2]  && a[1][1] > 70){
        return 1;
    }

    return 0;
}

int GameSwitch(int a, int b,int c,char Array[3][3]){

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
    
    char GameBase[3][3] = {32};
    int Try = 0;
    char x;
    int y,c;
    int check[9] = {0}; 
    cout<<"-------"<<GameBase[1][1];
    for(Try;Try<9;Try++){
        
        GameShape(GameBase);

        label: 

        std::cout<<" ABC 123 : ";
        cin>>x>>y;
        
        
        if(x == 'A')
        c = 0;
        else if(x == 'B')
        c = 1;
        else if(x == 'C')
        c = 2;

        y-=1;

        cout<<"---"<<GameBase[c][y];
        if ( GameBase[c][y] == 32 )
        {
            GameSwitch(c,y,Try,GameBase);
        }
        else if( GameBase[c][y] != 32 )
        {
            std::cout<<"YOUR ENTRIES IS INVALID, Please try again";
            goto label;
        }
        

        
        std::cout<<"----------- \n";
        if (1)
        {
            WinCheck(GameBase);
            if(WinCheck(GameBase) == 1){
                std::cout<<"\n\n\n\t BYE BYE BYE BYE!!!!!";
            }
        }
        
    }

    getch();
    return 0;

}







//
//
//       00 | 01 | 02
//      ----|----|----
//       10 | 11 | 12
//      ----|----|----
//       20 | 21 | 22
//
//         1     2     3  
//     -------------------
//   A |   X  |  O  |  X  
//     | -----|-----|-----
//   B |   O  |  X  |  O  
//     | -----|-----|-----
//   C |   X  |  O  |  X  
//
//
//  wowwwowwoowowowowo
//  if (bord[x][y]==32) bord[x][y] = X / O
//
//