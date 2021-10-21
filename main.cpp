#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;


int main() {
  bool isOver = false;
  char mc = 'o';
  const int rows = 8;
  const int columns = 8;
  int posX = 0;
  int posY = 0;
  char map[rows][columns] = {
    {'.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.'}
  };
  map[posX][posY] = 'O';

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      cout << map[i][j];
    }
    cout << endl;
  }
  while(!isOver)
  {
    char input = ' ';
    cin >> input;
    switch(input)
    {
      case 'd':
        map[posX][posY] = '.';
        posY++;
        if (posY > rows)
        {
          posY = 0;
        }
        map[posX][posY] = 'O';
        break;
      case 'w':
        map[posX][posY] = '.';
        posX--;
        if(posX < 0)
        {
          posX = 7;
        }
        map[posX][posY] = 'O';
        break;
      case 'a':
        map[posX][posY] = '.';
        posY--;
        if (posY < 0)
        {
          posY = 7;
        }
        map[posX][posY] = 'O';
        break;
      case 's':
        map[posX][posY] = '.';
        posX++;
        if(posX > columns)
        {
          posX = 0;
        }
        map[posX][posY] = 'O';
        break;
      default:
        isOver = true;
        break;
    }
    for (int i = 0; i < rows; i++)
    {
      for (int j = 0; j < columns; j++)
      {
        cout << map[i][j];
      }
        cout << endl;
      }
    }
  }
