#include <iostream>

int main()
{

  int choice, rows, cols;

  std::cout << "Menu" << std::endl;
  std::cout << "1. Print Half Pyramid" << std::endl;
  std::cout << "2. Print Inverted Half Pyramid" << std::endl;
  std::cout << "3. Print Hollow Inverted Half Pyramid" << std::endl;
  std::cout << "4. Print Full Pyramid" << std::endl;
  std::cout << "5. Print Inverted Full Pyramid" << std::endl;
  std::cout << "6. Print Hollow Full Pyramid" << std::endl;
  std::cout << "7. Print Full Rectangle" << std::endl;
  std::cout << "8. Print Hollow Rectangle" << std::endl;

  std::cout << "Enter your choice (1-8): ";
  std::cin >> choice;
  std::cout << "Enter number of rows: ";
  std::cin >> rows;

  if (choice == 1)
  {
    for (int i = 1; i <= rows; i++)
    {
      for (int j = 1; j <= i; j++)
      {
        std::cout << "* ";
      }
      std::cout << std::endl;
    }
  }
  else if (choice == 2)
  {
    for (int i = rows; i >= 1; i--)
    {
      for (int j = 1; j <= i; j++)
      {
        std::cout << "* ";
      }
      std::cout << std::endl;
    }
  }
  else if (choice == 3)
  {
    for (int i = rows; i > 0; i--)
    {
      for (int j = 0; j < i; j++)
      {
        if (i == rows || j == 0 || j == i - 1)
          std::cout << "* ";
        else
          std::cout << "  ";
      }
      std::cout << std::endl;
    }
  }
  else if (choice == 4)
  {
    for (int i = 1; i <= rows; i++)
    {
      for (int j = 1; j <= rows - i; j++)
      {
        std::cout << "  ";
      }

      for (int k = 1; k <= 2 * i - 1; k++)
      {
        std::cout << "* ";
      }
      std::cout << std::endl;
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
          std::cout << "*";
        }
        else
        {
          std::cout << " ";
        }
      }
      std::cout << std::endl;
    }
  }
  else if (choice == 6)
  {
    for (int i = 1; i <= rows; i++)
    {
      for (int j = 1; j <= rows - i; j++)
        std::cout << "  ";

      if (i == 1 || i == rows)
      {
        for (int k = 1; k <= 2 * i - 1; k++)
          std::cout << "* ";
      }
      else
      {
        std::cout << "* ";
        for (int l = 1; l <= 2 * i - 3; l++)
          std::cout << "  ";
        std::cout << "* ";
      }

      std::cout << std::endl;
    }
  }
  else if (choice == 7)
  {
    std::cout << "Enter number of columns: ";
    std::cin >> cols;
    for (int i = 0; i < rows; i++)
    {
      for (int j = 0; j < cols; j++)
      {
        std::cout << "* ";
      }
      std::cout << "\n";
    }
  }
  else if (choice == 8)
  {
    std::cout << "Enter number of columns: ";
    std::cin >> cols;

    for (int i = 0; i < rows; i++)
    {
      for (int j = 0; j < cols; j++)
      {
        if (i == 0 || j == 0 || i == rows - 1 || j == cols - 1)
          std::cout << "* ";
        else
          std::cout << "  ";
      }
      std::cout << std::endl;
    }
  }
  else
  {
    std::cout << "Invalid choice" << std::endl;
  }

  return 0;
}