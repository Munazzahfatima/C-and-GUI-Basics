//---------------------------------------------------------------------------
//
// Name:        Project ADD CALCULATOR
// Author:      wxDEVc++(outline)
// Modified:    Munazzah
// Description: It Takes 2 nos and add them
//
//---------------------------------------------------------------------------

#include "Project1App.h"
#include "Project1Frm.h"

IMPLEMENT_APP(Project1FrmApp)

bool Project1FrmApp::OnInit()
{
    Project1Frm* frame = new Project1Frm(NULL);
    SetTopWindow(frame);
    frame->Show();
    return true;
}
 
int Project1FrmApp::OnExit()
{
	return 0;
}
