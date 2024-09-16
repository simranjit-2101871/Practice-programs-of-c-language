/*The task is to hide and Show the console window of a C++ program. The program for the same is given below.

Note: The results of the following program can only be seen when it is executed on a console. 

*/

#include <iostream> 
#include <windows.h> 
  
using namespace std; 
  
void countdown() 
{ 
    cout << "3" << endl; 
    Sleep(1000); 
    cout << "2" << endl; 
    Sleep(1000); 
    cout << "1" << endl; 
    Sleep(1000); 
    cout << "0" << endl; 
} 
  
int main() 
{ 
    countdown(); 
    HWND window; 
    AllocConsole(); 
    // You Can Find HANDLE of other windows too 
    window = FindWindowA("ConsoleWindowClass", NULL); 
    ShowWindow(window, 0); 
  
    countdown(); 
    ShowWindow(window, 1); 
}