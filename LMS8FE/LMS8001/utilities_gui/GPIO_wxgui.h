#ifndef __LMS8LMS8GPIO_wxgui__
#define __LMS8LMS8GPIO_wxgui__

/**
@file
Subclass of GPIO_view, which is generated by wxFormBuilder.
*/

#include "utilities_gui.h"

//// end generated include
class LMScomms;
/** Implementing GPIO_view */
class lms8_GPIO_wxgui : public lms8_GPIO_view
{
protected:
	// Handlers for GPIO_view events.
	void OnUpdateClick(wxCommandEvent &event);
	void OnChangeGPIODirection(wxCommandEvent &event);

public:
	/** Constructor */
	lms8_GPIO_wxgui(wxWindow *parent);
	//// end generated class members
	lms8_GPIO_wxgui(wxWindow *parent, wxWindowID id = wxID_ANY, const wxString &title = wxEmptyString, const wxPoint &pos = wxDefaultPosition, const wxSize &size = wxDefaultSize, long styles = 0);
	//        virtual void Initialize(LMScomms* pCtrPort, LMScomms* pDataPort);
	virtual void Initialize(LMScomms *pCtrPort);

protected:
	LMScomms *ctrPort;
	//        LMScomms* dataPort;
};

#endif // __GPIO_wxgui__
