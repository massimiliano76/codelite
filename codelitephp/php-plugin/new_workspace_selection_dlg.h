#ifndef __new_workspace_selection_dlg__
#define __new_workspace_selection_dlg__

/**
@file
Subclass of NewWorkspaceSelectionDlgBase, which is generated by wxFormBuilder.
*/

#include "php_ui.h"

//// end generated include

/** Implementing NewWorkspaceSelectionDlgBase */
class NewWorkspaceSelectionDlg : public NewWorkspaceSelectionDlgBase
{
	bool m_isPHPWorkspace;

protected:
	// Handlers for NewWorkspaceSelectionDlgBase events.
	void OnStandardWorkspace( wxCommandEvent& event );
	void OnPHPWorkspace( wxCommandEvent& event );
	void OnClose(wxCloseEvent& event);
	void OnKeyDown(wxKeyEvent& event);

public:
	/** Constructor */
	NewWorkspaceSelectionDlg( wxWindow* parent );
	//// end generated class members

	bool GetIsPHPWorkspace() const {
		return m_isPHPWorkspace;
	}
};

#endif // __new_workspace_selection_dlg__