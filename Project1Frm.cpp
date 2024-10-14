///-----------------------------------------------------------------
///
///    DESCRIPTION
///            ADD CALCULATOR class implementation
///
///------------------------------------------------------------------

#include "Project1Frm.h"

//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//----------------------------------------------------------------------------
// Project1Frm
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(Project1Frm,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(Project1Frm::OnClose)
	EVT_BUTTON(ID_WXBUTTON1,Project1Frm::WxButton1Click)
END_EVENT_TABLE()
////Event Table End

Project1Frm::Project1Frm(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

Project1Frm::~Project1Frm()
{
}

void Project1Frm::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	WxStaticText3 = new wxStaticText(this, ID_WXSTATICTEXT3, wxT("Number 2"), wxPoint(38, 86), wxDefaultSize, 0, wxT("WxStaticText3"));
	WxStaticText3->SetFont(wxFont(10, wxSWISS, wxNORMAL, wxBOLD, false, wxT("Segoe UI Emoji")));

	WxStaticText2 = new wxStaticText(this, ID_WXSTATICTEXT2, wxT("Number 1"), wxPoint(35, 21), wxDefaultSize, 0, wxT("WxStaticText2"));
	WxStaticText2->SetFont(wxFont(10, wxSWISS, wxNORMAL, wxBOLD, false, wxT("Segoe UI Emoji")));

	WxStaticText1 = new wxStaticText(this, ID_WXSTATICTEXT1, wxT("Result"), wxPoint(40, 172), wxDefaultSize, 0, wxT("WxStaticText1"));
	WxStaticText1->SetFont(wxFont(12, wxSWISS, wxITALIC, wxBOLD, false, wxT("Segoe UI Emoji")));

	WxEdit3 = new wxTextCtrl(this, ID_WXEDIT3, wxT("0"), wxPoint(39, 206), wxSize(133, 22), 0, wxDefaultValidator, wxT("WxEdit3"));

	WxEdit2 = new wxTextCtrl(this, ID_WXEDIT2, wxT("0"), wxPoint(38, 115), wxSize(133, 22), 0, wxDefaultValidator, wxT("WxEdit2"));

	WxEdit1 = new wxTextCtrl(this, ID_WXEDIT1, wxT("0"), wxPoint(38, 50), wxSize(133, 22), 0, wxDefaultValidator, wxT("WxEdit1"));

	WxButton1 = new wxButton(this, ID_WXBUTTON1, wxT("ADD"), wxPoint(207, 131), wxSize(104, 36), 0, wxDefaultValidator, wxT("WxButton1"));

	SetTitle(wxT("ADD CALCULATOR"));
	SetIcon(wxNullIcon);
	SetSize(171,44,346,329);
	Center();
	
	////GUI Items Creation End
}

void Project1Frm::OnClose(wxCloseEvent& event)
{
	Destroy();
}

/*
 * WxButton1Click
 */
void Project1Frm::WxButton1Click(wxCommandEvent& event)
{
	// insert your code here
	double n1,n2,sum;
    if(	WxEdit1->GetValue().ToDouble(&n1) && WxEdit2->GetValue().ToDouble(&n2)){
        sum=n1+n2;
        WxEdit3->SetValue(wxString::Format(wxT("%lf"),sum) );
    }
}
