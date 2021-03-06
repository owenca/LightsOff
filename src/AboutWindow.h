#ifndef ABOUTWINDOW_H
#define ABOUTWINDOW_H

#include <Window.h>
#include <View.h>
#include <Bitmap.h>
#include <Button.h>
#include <Messenger.h>
#include <Font.h>
#include <StatusBar.h>

enum
{
	ABOUT_STARTUP=0,
	ABOUT_OK,
	ABOUT_OK2=2
};

enum
{
	M_RESET_STATUS='mrst',
	M_SET_STATUS='msst',
	M_UPDATE_STATUS='mups'
};

class AboutView : public BView
{
public:
	AboutView(BRect frame);
	~AboutView(void);
	void AttachedToWindow(void);
	void Draw(BRect update);
	void MouseDown(BPoint pt);
	
	BBitmap *fLogo;
	
	char version[64];
	BPoint versionpos;
	
	uint8 fAboutFlags;
	int32 fEntryCount;
};

class AboutWindow : public BWindow
{
public:
	AboutWindow(void);
};

#endif
