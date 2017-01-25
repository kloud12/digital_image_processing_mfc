
// dip.h : main header file for the dip application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CdipApp:
// See dip.cpp for the implementation of this class
//

class CdipApp : public CWinApp
{
public:
	CdipApp();


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CdipApp theApp;
