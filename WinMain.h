/* 
 * File:   WinMain.h
 * Author: emendes
 *
 * Created on 27 oktober 2016, 14:22
 */

#ifndef WINMAIN_H
#define	WINMAIN_H

//C Runtime Files
#ifndef _WINDOW_
    #include <Windows.h>
#endif

int _tmain(int argc, char* argv[]);
int CALLBACK WinMain(HINSTANCE hinstance, HINSTANCE hPrevInstance, LPSTR 1pCmdLine, int nCmdShow);

#endif	/* WINMAIN_H */
 