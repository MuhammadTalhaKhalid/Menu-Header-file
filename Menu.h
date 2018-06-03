#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
    int pointer = 0;
    	int MenuSize=0;
class menu {
	public:
		int MainMenu(string MenuTitle,int MenSize,int color1,int color2,int color3) {
			MenuSize=MenSize;
		string Menu[MenuSize];
				for(int i=0;i<MenuSize;i++) {
				cout<<"Enter "<<i<<" Option: ";
				cin>>Menu[i];
			}
    while(true)
    {
        system("cls");

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color1);
        cout <<MenuTitle<<"\n\n";

        for (int i = 0; i < MenuSize; ++i)
        {
            if (i == pointer)
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color2);
                cout << Menu[i] << endl;
            }
            else
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color3);
                cout << Menu[i] << endl;
            }
        }

        while(true)
        {
            if (GetAsyncKeyState(VK_UP) != 0)
            {
                pointer -= 1;
                if (pointer == -1)
                {
                    pointer = 1;
                }
                break;
            }
            else if (GetAsyncKeyState(VK_DOWN) != 0)
            {
                pointer += 1;
                if (pointer == MenuSize)
                {
                    pointer = 0;
                }
                break;
            }
            else if (GetAsyncKeyState(VK_RETURN) != 0)
            {
                Cases();
                
            }
        }

        Sleep(150);
    }
		
		}
		int Cases();
		
};

