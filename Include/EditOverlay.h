/*
 * This file is part of NumptyPhysics
 * Copyright (C) 2008 Tim Edmonds
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 3 of the
 * License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 */
/*
* PSP port by rock88: rock88a@gmail.com
* http://rock88dev.blogspot.com
*/

#ifndef __EDITOVERLAY_H__
#define __EDITOVERLAY_H__

#include <string.h>
#include <cstdio>
#include <iostream>
#include <sstream>
#include <fstream>

#include <Box2D/Box2D.h>
#include "Common.h"
#include "Path.h"
#include "Canvas.h"
#include "Config.h"
#include "Canvas.h"
#include "Levels.h"
#include "Overlay.h"

#include "SDL_Lite.h"

using namespace std;

class EditOverlay : public Overlay
{
	int m_saving, m_sending;

public:
	EditOverlay(GameParams& game, int x=10, int y=10, int w=10, int h=10);
	Rect pos(int i);
	int index(int x, int y);
	void outline(Canvas* screen, int i, int c);
	virtual void draw(Canvas* screen);
	virtual bool onClick(int x, int y);
};

#endif
