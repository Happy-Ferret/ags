//=============================================================================
//
// Adventure Game Studio (AGS)
//
// Copyright (C) 1999-2011 Chris Jones and 2011-20xx others
// The full list of copyright holders can be found in the Copyright.txt
// file, which is part of this source code distribution.
//
// The AGS source code is provided under the Artistic License 2.0.
// A copy of this license can be found in the file License.txt and at
// http://www.opensource.org/licenses/artistic-license-2.0.php
//
//=============================================================================
//
//
//
//=============================================================================
#ifndef __AGS_EE_GUI__GUIDIALOG_H
#define __AGS_EE_GUI__GUIDIALOG_H

// Functions for handling hard-coded GUIs
// Prepares GUI bitmaps which will be passed to the renderer's draw chain
void prepare_gui_screen(int x, int y, int width, int height, bool opaque);
// Deletes GUI bitmaps
void clear_gui_screen();
// Draws virtual screen contents on the GUI bitmaps and assignes them to
// the renderer's draw chain
void refresh_gui_screen();
int  loadgamedialog();
int  savegamedialog();
void preparesavegamelist(int ctrllist);
void enterstringwindow(char *prompttext, char *stouse);
int  enternumberwindow(char *prompttext);
int  roomSelectorWindow(int currentRoom, int numRooms, int*roomNumbers, char**roomNames);
int  myscimessagebox(char *lpprompt, char *btn1, char *btn2);
int  quitdialog();

#endif // __AGS_EE_GUI__GUIDIALOG_H
