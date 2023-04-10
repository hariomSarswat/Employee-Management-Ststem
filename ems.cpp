#include <iostream>
#include <string.h>
using namespace std;
int i = 0;
#define limit 50
void Menu();
void Input();
void Search();
void Departmentlist();
void Displayall();
void Update();
void Delete();
void Moreinformation();
void Age();
void Experience();
void Gender();
void Salary();
class Employee
{
public:
  int Salary, ID, Age, Exp, Num;

  string Name, Sex, Department, Post;

  // FUNCTION
};
Employee E[limit];
void Menu()
{
  cout << "*******MENU*******" << endl;
  cout << "Enter your option" << endl;
  cout << "1=> Add a new record" << endl;
  cout << "2=> Search record from employee id" << endl;
  cout << "3=> List Employee of particular department" << endl;
  cout << "4=> Display all employee" << endl;
  cout << "5=> Update record of an employee" << endl;
  cout << "6=> Delete record of particular employee" << endl;
  cout << "7=> Exit from the program" << endl;
  cout << "8=> For mor information" << endl;
  cout << "*******************" << endl;
  int option;
  cout << " choose an option: ";
  cin >> option;
  switch (option)
  {
  case 1:
  {
    Input();
    break;
  }
  case 2:
  {
    Search();
    break;
  }
  case 3:
  {
    Departmentlist();
    break;
  }
  case 4:
  {
    Displayall();
    break;
  }
  case 5:
  {
    Update();
    break;
  }
  case 6:
  {
    Delete();
    break;
  }
  case 7:
  {
    cout << "Exit";
    break;
  }
  case 8:
  {
    Moreinformation();
    break;
  }
  default:
  {
    cout << "Enter a valid option" << endl;
    Menu();
  }
  }
}
void Input()
{
  if (i < limit)
  {
    cout << "Employee Name :";
    cin >> E[i].Name;
    cout << "Employee ID :";
    cin >> E[i].ID;
    cout << "Employee Age :";
    cin >> E[i].Age;
    cout << "Employee Sex :(M/f)";
    cin >> E[i].Sex;
    cout << "Employee Department:";
    cin >> E[i].Department;
    cout << "Employee Post :";
    cin >> E[i].Post;
    cout << "Employee Exp.(Years) :";
    cin >> E[i].Exp;
    cout << "Employee Salary :";
    cin >> E[i].Salary;
    i++;
  }
  Menu();
}
void Search()
{
  int code, count = 0, j;
  cout << "Insert ID no.that you want Search:";
  cin >> code;
  for (j = 0; j < limit; j++)
  {
    if (E[j].ID == code)
    {
      cout << "Employee Name :";
      cout << E[j].Name << endl;
      cout << "Employee ID :";
      cout << E[j].ID << endl;
      cout << "Employeeage Age :";
      cout << E[j].Age << endl;
      cout << "Employee sex :(M/f)";
      cout << E[j].Sex << endl;
      cout << "Employee department:";
      cout << E[j].Department << endl;
      cout << "Employee Post :";
      cout << E[j].Post << endl;
      cout << "Employee Exp. :";
      cout << E[j].Exp << endl;
      cout << "Employee Salary :";
      cout << E[j].Salary << endl;
      count++;
    }
  }
  if (count == 0)
  {
    cout << "error : not found " << endl
         << "enter a valid ID no." << endl;
  }
  Menu();
}
void Departmentlist()
{
  string code;
  int j, count = 0;
  cout << "enter Department that you want search:";
  cin >> code;
  for (j = 0; j < i; j++)
  {
    if (E[j].Department == code)
    {
      cout << "Employee Name :";
      cout << E[j].Name << endl;
      count++;
    }
  }
  if (count == 0)
  {
    cout << "error : not found " << endl
         << "enter a valid Department no." << endl;
  }
  Menu();
}
void Displayall()
{
  int j;
  for (j = 0; j < i; j++)
  {
    cout << "Employee Name :";
    cout << E[j].Name << endl;
    cout << "Employee ID :";
    cout << E[j].ID << endl;
    cout << "Employeeage Age :";
    cout << E[j].Age << endl;
    cout << "Employee sex :(M/f)";
    cout << E[j].Sex << endl;
    cout << "Employee department:";
    cout << E[j].Department << endl;
    cout << "Employee Post :";
    cout << E[j].Post << endl;
    cout << "Employee Exp. :";
    cout << E[j].Exp << endl;
    cout << "Employee Salary :";
    cout << E[j].Salary << endl;
  }
  Menu();
}
void Update()
{
  int j, code, count = 0;
  cout << "insert ID no.that you Search:";
  cin >> code;
  for (j = 0; j < i; j++)
  {
    if (E[j].ID == code)
    {
      cout << "Employee Name :";
      cin >> E[j].Name;
      cout << "Employee Age :";
      cin >> E[j].Age;
      cout << "Employee sex :(M/f)";
      cin >> E[j].Sex;
      cout << "Employee department:";
      cin >> E[j].Department;
      cout << "Employee Post :";
      cin >> E[j].Post;
      cout << "Employee Exp. :";
      cin >> E[j].Exp;
      cout << "Employee Salary :";
      cin >> E[j].Salary;
      count++;
    }
  }
  if (count == 0)
  {
    cout << "error : not found " << endl
         << "enter a valid ID no." << endl;
  }
  Menu();
}
void Delete()
{
  cout << "enter ID no of employee that you want delete :";
  int code, j, k, count = 0;
  cin >> code;
  for (j = 0; j < i; j++)
  {
    if (E[j].ID == code)
    {
      for (k = j; k < i; k++)
      {

        E[k].Name = E[k + 1].Name;
        E[k].Age = E[k + 1].Age;
        E[k].Sex = E[k + 1].Sex;
        E[k].ID = E[k + 1].ID;
        E[k].Department = E[k + 1].Department;
        E[k].Post = E[k + 1].Post;
        E[k].Exp = E[k + 1].Exp;
        E[k].Salary = E[k + 1].Salary;
        count++;
      }
      i--;
    }
  }
  if (count == 0)
  {
    cout << "error : not found " << endl
         << "enter a valid ID no." << endl;
  }
  Menu();
}
void Moreinformation()
{
  cout << "#### FOR MORE INFORMATION ####" << endl
       << "CHOOSE AN OPTION " << endl;
  cout << "1=>For age seperation" << endl;
  cout << "2=>For exp seperation" << endl;
  cout << "3=>For gender seperation" << endl;
  cout << "4=>For salary basis seperation" << endl;
  cout << "############" << endl;
  int options;
  cin >> options;
  switch (options)
  {
  case 1:
  {
    Age();
    break;
  }
  case 2:
  {
    Experience();
    break;
  }
  case 3:
  {
    Gender();
    break;
  }
  case 4:
  {
    Salary();
    break;
  }
  default:
  {
    cout << "enter a valid option" << endl;
    break;
  }
  }
}
void Age()
{
  int a, j;
  int count = 0;
  cout << "enter a particular age :";
  cin >> a;
  for (j = 0; j < i; j++)
  {
    if (E[j].Age >= a)
    {
      count++;
    }
  }
  cout << "total " << count << " employees age is more than or equal " << a << endl;
  Menu();
}
void Experience()
{
  int a, j;
  int count = 0;
  cout << "enter a particular Experience time(in years) :";
  cin >> a;
  for (j = 0; j < i; j++)
  {
    if (E[j].Exp >= a)
    {
      count++;
    }
  }
  cout << "total " << count << " employee's experience is greater than or equal " << a << endl;
  Menu();
}

void Gender()
{
  int j;
  string gender;
  cout << "enter gender for seperation(M/F) :";
  cin >> gender;
  int count = 0;
  for (j = 0; j < i; j++)
  {
    if (E[j].Sex == gender)
    {
      count++;
    }
  }
  cout << "total " << count << " employye's are " << gender << endl;
  Menu();
}
void Salary()
{
  int j;
  int count = 0;
  int a;
  cout << "enter salary to seperation :";
  cin >> a;
  for (j = 0; j < i; j++)
  {
    if (E[j].Salary >= a)
    {
      count++;
    }
  }
  cout << "total " << count << " employee get salary more than or equal " << a << endl;
  Menu();
}

int main()
{
  cout << "NOTE: employee no. should be less than 50 " << endl;
  Menu();
  return 0;
}
