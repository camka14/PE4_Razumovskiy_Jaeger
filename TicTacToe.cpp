 
char** CreateBoard()
    {
      char** array2D = 0;
      array2D = new char*[3];

      for (int h = 0; h < 3; h++)
      {
            array2D[h] = new char[3];

            for (int w = 0; w < 3; w++)
            {
                  array2D[h][w] = ' ';
            }
      }

      return array2D;
    }

int main(){
    char** arr = CreateBoard();
}