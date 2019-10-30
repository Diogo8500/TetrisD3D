#pragma once
#include "Window.h"
#include "MyTimer.h"

class App
{
public:
	App(int width, int height);
	//Master frame / Message loop
	int Go();
private:
	void DoFrame();
private:
	Window wnd;
	MyTimer timer;
};

