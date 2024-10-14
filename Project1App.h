//---------------------------------------------------------------------------
//
// Name:        Project ADDITION CALCULATOR
// Created:     wxDev C++ (outline)
// Modified:    Munazzah
// Description:  It takes 2 nos and add them
//
//---------------------------------------------------------------------------

#ifndef __PROJECT1FRMApp_h__
#define __PROJECT1FRMApp_h__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#else
	#include <wx/wxprec.h>
#endif

class Project1FrmApp : public wxApp
{
	public:
		bool OnInit();
		int OnExit();
};

#endif
