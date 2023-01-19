#include <iostream>
#include <fstream>
#include <windows.h>
#include <cstring>
#include <cstdio>

using namespace std;

int main()
{
    unsigned char c;
    unsigned char e = 128;
    cout << endl;
    cout << "ASCII codes: Part 1" << endl << endl;
	for(int x=1; x<=20; x++)
	{
	printf("=");
	}
	
	cout << endl << endl;
	
	cout << (char)0xDa;
	for(int i=0; i<63; ++i)
	cout << (char)0xC4;
	cout << (char)0xBF;
	for(c=0; c<=127; c++)
    {
        if(c%8 == 0)
        {
            printf("\n");
        }
        printf("%d %c \t", c, c);
        cout << (char)0xB3;
    }
    cout << endl;
    cout << (char)0xC0;
	for(int i=0; i<63; ++i)
	cout << (char)0xC4;
	cout << (char)0xD9;
	cout << '\n';
    cout << endl << endl;
    cout << "ASCII codes: Part 2" << endl << endl;
    for(int y=1; y<=20; y++)
	{
	printf("=");
	}
	cout << endl;
	cout << (char)0xDa;
	for(int i=0; i<63; ++i)
	cout << (char)0xC4;
	cout << (char)0xBF;
    while(e>=128)
    {
        printf("%d %c \t", e, e);
        cout << (char)0xB3;
        ++e;
        if(e==128)
        {
            continue;
        }
        else if(e%8 == 0)
        {
            printf("\n");
        }
    }
    cout << (char)0xC0;
	for(int i=0; i<63; ++i)
	cout << (char)0xC4;
	cout << (char)0xD9;
	cout << '\n';
    return 0;
}
