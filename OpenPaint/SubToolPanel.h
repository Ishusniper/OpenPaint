#ifndef __SubToolPanel__
#define __SubToolPanel__

/**
@file
Subclass of ToolPanel, which is generated by wxFormBuilder.
*/

#include "OpenPaintGUI.h"

/** Implementing ToolPanel */
class SubToolPanel : public ToolPanel
{
protected:
    virtual void EnableTools();
	// Handlers for ToolPanel events.

public:
	/** Constructor */
	SubToolPanel( wxWindow* parent );
	void OnPickColor( wxCommandEvent& event );
    void OnPencil( wxCommandEvent& event );
    void OnBrush( wxCommandEvent& event );
	void OnFill( wxCommandEvent& event );
	void OnEraser( wxCommandEvent& event );
	void OnMagnify( wxCommandEvent& event );
	void OnSprayCan( wxCommandEvent& event );
	void OnRectangle( wxCommandEvent& event );
    void OnEllipse( wxCommandEvent& event );
    void OnRectangleRounded( wxCommandEvent& event );
    void OnPolyline( wxCommandEvent& event );
	void OnSelect( wxCommandEvent& event );
    void OnSelectLasso( wxCommandEvent& event );
	void OnText( wxCommandEvent& event );
};

#endif // __SubToolPanel__