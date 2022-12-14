#ifndef __LMS8dlgConnectionSettingsLMS7__
#define __LMS8dlgConnectionSettingsLMS7__

/**
@file
Subclass of dlgConnectionSettingsLMS7, which is generated by wxFormBuilder.
*/

#include "utilities_gui.h"

//// end generated include

class ConnectionManager;

/** Implementing dlgConnectionSettingsLMS7 */
class lms8_dlgConnectionSettingsLMS7 : public lms8_dlgConnectionSettingsLMS7_view
{
protected:
	// Handlers for dlgConnectionSettingsLMS7 events.
	void GetDeviceList(wxInitDialogEvent &event);
	void OnConnect(wxCommandEvent &event);
	void OnCancel(wxCommandEvent &event);
	void OnDisconnect(wxCommandEvent &event);

public:
	/** Constructor */
	lms8_dlgConnectionSettingsLMS7(wxWindow *parent);
	//// end generated class members
	//		void SetConnectionManagers(ConnectionManager* lms8ctr, ConnectionManager* streamBrdctr);
	void SetConnectionManager(ConnectionManager *lms7ctr);

protected:
	ConnectionManager *lms7port;
	//		ConnectionManager* streamBrdPort;
};

#endif // __dlgConnectionSettingsLMS7__
