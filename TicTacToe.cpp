#include <iostream>

char** CreateBoard()
    {
      char** array2D = 0;
      array2D = new char*[3];

      for (int h = 0; h < 3; h++)
      {
            array2D[h] = new char[3];

            for (int w = 0; w < 3; w++)
            {
                  array2D[h][w] = 'X';
            }
      }

      return array2D;
    }

void DisplayBoard(char** arr){
    std::cout << "Board: " << std::endl;
    for (int i=0; i < 3; i++){
        for (int j=0; j < 3; j++){
              std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}


void GetPlayerChoice(char** arr; int *x, int *y){
    do{
      std::cout << "Input x position";
      std::getline(std::cin,x);
      std::cout << "Input y position";
      std::getline(std::cin,y);
    }while(arr[x][y] == " ")
}

void PlaceMarker(int x, int y, char marker, char** board){
    board[x-1][y-1] = marker;
    return;
}

int main(){
    char** arr = CreateBoard();
    DisplayBoard(arr);
    int* x,y;
    char marker = 'O';
    GetPLayerChoice(arr,x,y);
    PlaceMarker(x,y,marker,arr);
    DisplayBoard(arr);
}
