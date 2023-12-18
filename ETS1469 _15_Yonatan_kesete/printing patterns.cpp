 #include<iostream>
 using namespace std;
 int main(){
 int choice, rows, cols;

  cout << "Menu" <<endl;
  cout << "1. Print Half Pyramid" << endl;
  cout << "2. Print Inverted Half Pyramid" << endl;
  cout << "3. Print Hollow Inverted Half Pyramid" <<endl;
  cout << "4. Print Full Pyramid" << std::endl;
  cout << "5. Print Inverted Full Pyramid" << endl;
  cout << "6. Print Hollow Full Pyramid" << endl;
  cout << "7. Print Full Rectangle" << endl;
  cout << "8. Print Hollow Rectangle" << endl;

  cout << "Enter your choice (1-8): ";
  cin >> choice;
  cout << "Enter number of rows: ";
  cin >> rows;

  if (choice == 1)
  {
    for (int i = 1; i <= rows; i++)
    {
      for (int j = 1; j <= i; j++)
      {
        cout << "* ";
      }
      cout <<endl;
    }
  }
  else if (choice == 2)
  {
    for (int i = rows; i >= 1; i--)
    {
      for (int j = 1; j <= i; j++)
      {
        cout << "* ";
      }
      cout <<endl;
    }
  }
  else if (choice == 3)
  {
    for (int i = rows; i > 0; i--)
    {
      for (int j = 0; j < i; j++)
      {
        if (i == rows || j == 0 || j == i - 1)
          cout << "* ";
        else
          cout << "  ";
      }
      cout << endl;
    }
  }
  else if (choice == 4)
  {
    for (int i = 1; i <= rows; i++)
    {
      for (int j = 1; j <= rows - i; j++)
      {
        cout << "  ";
      }

      for (int k = 1; k <= 2 * i - 1; k++)
      {
        cout << "* ";
      }
    cout <<endl;
    }
  }
  else if (choice == 5)
  {
    for (int i = 0; i < rows; i++)
    {
      for (int j = 0; j < rows; j++)
      {
        if (i == 0 || j == 0 || i == rows - 1 || j == rows - 1 || i == j || j == rows - i - 1)
        {
          cout << "*";
        }
        else
        {
          cout << " ";
        }
      }
      cout << endl;
    }
  }
  else if (choice == 6)
  {
    for (int i = 1; i <= rows; i++)
    {
      for (int j = 1; j <= rows - i; j++)
        cout << "  ";

      if (i == 1 || i == rows)
      {
        for (int k = 1; k <= 2 * i - 1; k++)
          cout << "* ";
      }
      else
      {
        cout << "* ";
        for (int l = 1; l <= 2 * i - 3; l++)
          cout << "  ";
        cout << "* ";
      }

      cout << endl;
    }
  }
  else if (choice == 7)
  {
    cout << "Enter number of columns: ";
    cin >> cols;
    for (int i = 0; i < rows; i++)
    {
      for (int j = 0; j < cols; j++)
      {
        cout << "* ";
      }
      cout << "\n";
    }
  }
  else if (choice == 8)
  {
    cout << "Enter number of columns: ";
    cin >> cols;

    for (int i = 0; i < rows; i++)
    {
      for (int j = 0; j < cols; j++)
      {
        if (i == 0 || j == 0 || i == rows - 1 || j == cols - 1)
          cout << "* ";
        else
          cout << "  ";
      }
      cout <<endl;
    }
  }
  else
  {
    cout << "Invalid choice" <<endl;
  }
  return 0;
 }
