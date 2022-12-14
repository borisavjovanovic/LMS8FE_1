#ifndef __lms8001_pnlConfig_view__
#define __lms8001_pnlConfig_view__

/**
@file
Subclass of pnlConfig_view, which is generated by wxFormBuilder.
*/

#include "lms8001_wxgui.h"

//// end generated include
#include <map>
#include "../lime/LMS8001_parameters.h"

class LMS8001;
class lms8_dlgTempCalibrate;

/** Implementing pnlConfig_view */
class lms8001_pnlConfig_view : public pnlConfig_view
{
	protected:
		// Handlers for pnlLimeLightPAD_view events.
		void ParameterChangeHandler( wxCommandEvent& event );
//        void ParameterChangeHandler(wxSpinEvent& event);
//        void onbtnReadVerRevMask( wxCommandEvent& event );
	public:
		/** Constructor */
		lms8001_pnlConfig_view( wxWindow* parent );
	//// end generated class members
		lms8001_pnlConfig_view(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxTAB_TRAVERSAL);
    void Initialize(LMS8001* pControl);
    void UpdateGUI();

	void OnClick_btnTempRead(wxCommandEvent& event);

	void OnUpdateUI_sttxtTemp(wxUpdateUIEvent& event);

	void OnClick_btnTempCalibrate(wxCommandEvent& event);

protected:
    LMS8001* lmsControl;
	std::map<wxWindow*, LMS8Parameter> wndId2Enum;

	lms8_dlgTempCalibrate* tempCalibrate;
};

#endif // __lms8001_pnlConfig_view__
