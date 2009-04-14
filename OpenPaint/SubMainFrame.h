/*
 * OpenPaint
 * www.sourceforge.net/projects/openpaint
 *
 * Copyright (C) 2007, Steven Jedlicka
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */	


#ifndef __SubMainFrame__
#define __SubMainFrame__

/**
@file
Subclass of MainFrame, which is generated by wxFormBuilder.
@todo Add your event handlers directly to this file.
*/

#include "OpenPaintGUI.h"

/** Implementing MainFrame */
class SubMainFrame : public MainFrame
{
    private:
        DECLARE_EVENT_TABLE()
    protected:
        virtual void Init();
        virtual void HistoryOpen( wxCommandEvent& event );
        void UpdateHistory();
        void AddFileToHistory(wxString strFilename);

        void OnUndo( wxCommandEvent& event );
		void OnRedo( wxCommandEvent& event );
		void OnCut( wxCommandEvent& event );
		void OnCopy( wxCommandEvent& event );
		void OnPaste( wxCommandEvent& event );
		void OnDelete( wxCommandEvent& event );
		void OnSelectAll( wxCommandEvent& event );
        void OnClear( wxCommandEvent& event );
        void OnFillFGColor( wxCommandEvent& event );
        void OnFillBGColor( wxCommandEvent& event );

        virtual void OnToolWindow( wxCommandEvent& event );
        virtual void OnColorWindow( wxCommandEvent& event );
        virtual void OnToolbar( wxCommandEvent& event );
        virtual void OnStatusBar( wxCommandEvent& event );

        virtual void OnZoomOut( wxCommandEvent& event );
        virtual void OnZoomIn( wxCommandEvent& event );
        virtual void OnNormalZoom( wxCommandEvent& event );
        virtual void OnHistogram( wxCommandEvent& event );
        
        virtual void OnFullscreen( wxCommandEvent& event );

        virtual void OnFlipHorizontal( wxCommandEvent& event );
        virtual void OnFlipVertical( wxCommandEvent& event );
        virtual void OnRotate( wxCommandEvent& event );
        virtual void OnImageSize( wxCommandEvent& event );
        virtual void OnCanvasSize( wxCommandEvent& event );

        virtual void OnPickColor( wxCommandEvent& event );
        virtual void OnPencil( wxCommandEvent& event );
        virtual void OnBrush( wxCommandEvent& event );
        virtual void OnFill( wxCommandEvent& event );
        virtual void OnEraser( wxCommandEvent& event );
        virtual void OnMagnify( wxCommandEvent& event );
        virtual void OnSprayCan( wxCommandEvent& event );
        virtual void OnRectangle( wxCommandEvent& event );
        virtual void OnEllipse( wxCommandEvent& event );
        virtual void OnRectangleRounded( wxCommandEvent& event );
        virtual void OnPolyline( wxCommandEvent& event );
        virtual void OnSelect( wxCommandEvent& event );
        virtual void OnSelectLasso( wxCommandEvent& event );
        virtual void OnText( wxCommandEvent& event );

        virtual void OnInvertColors( wxCommandEvent& event );
        virtual void OnBlur( wxCommandEvent& event );
        virtual void OnPixelize( wxCommandEvent& event );
        virtual void OnGreyscale( wxCommandEvent& event );
        virtual void OnMonochrome( wxCommandEvent& event );
        

        virtual void OnFont( wxCommandEvent& event );
        virtual void OnForeground( wxCommandEvent& event );
        virtual void OnBackground( wxCommandEvent& event );

        virtual void OnNewFile320( wxCommandEvent& event );
        virtual void OnNewFile640( wxCommandEvent& event );
        virtual void OnNewFile( wxCommandEvent& event );
        virtual void OnNewFile1024( wxCommandEvent& event );

        virtual void OnOpenFile( wxCommandEvent& event );
        virtual void OnSave( wxCommandEvent& event );
        virtual void OnSaveAs( wxCommandEvent& event );
        virtual void OnClose( wxCloseEvent& event );
        virtual void OnExit( wxCommandEvent& event );
        virtual void OnAbout( wxCommandEvent& event );

        virtual void OnSize(wxSizeEvent& event);
        virtual void SetMenuBar(wxMenuBar* menuBar);
        virtual void Shutdown();

        wxMenu *m_menuRecentImages;

        wxAuiManager * m_mAuiManager;

    public:
	    /** Constructor */
	    SubMainFrame( wxWindow* parent, int id = wxID_ANY, wxString title = wxT("OpenPaint"), wxPoint pos = wxDefaultPosition, wxSize size = wxSize( 800,600 ), int style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
        virtual ~SubMainFrame();

        void NewFile(int height = 800, int width = 600);
        void OpenFile(wxString strFilename);
        bool SaveFile();
        void OpenLastFiles();
        bool SaveAs();
};

#endif // __SubMainFrame__
