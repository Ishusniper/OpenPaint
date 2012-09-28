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


#ifndef __SubImageSizeDialog__
#define __SubImageSizeDialog__

/**
@file
Subclass of ImageSizeDialog, which is generated by wxFormBuilder.
*/

#include "OpenPaintGUI.h"

/** Implementing ImageSizeDialog */
class SubImageSizeDialog : public ImageSizeDialog
{
    private:
        int m_iCurrentWidth;
        int m_iCurrentHeight;

        bool m_bIsLinked;
        double m_dRatio;

        int m_iWidth;
        int m_iHeight;
        int m_iOffsetX;
        int m_iOffsetY;
    protected:
	    // Handlers for ImageSizeDialog events.
	    void OnWidth( wxSpinEvent& event );
	    void OnHeight( wxSpinEvent& event );
	    void OnLink( wxCommandEvent& event );
	
    public:
        /** Constructor */
        SubImageSizeDialog( wxWindow* parent, int iWidth, int iHeight);

        int GetWidth();
        int GetHeight();

        void SetWidth(int iWidth);
        void SetHeight(int iHeight);
};

#endif // __SubImageSizeDialog__