#ifndef ELEMENT_H
#define ELEMENT_H

#include "wx/wx.h"
#include <vector>
#include "wx/xml/xml.h"
#include "ElementEffects.h"

enum ElementType
{
    ELEMENT_TYPE_MODEL,
    ELEMENT_TYPE_VIEW,
    ELEMENT_TYPE_TIMING
};

class Element
{
    public:
        Element(wxString &name, wxString &type,bool visible,bool collapsed);
        virtual ~Element();

        wxString GetName();
        void SetName(wxString &name);

        bool GetVisible();
        void SetVisible(bool visible);

        bool GetCollapsed();
        void SetCollapsed(bool collapsed);

        wxString GetType();
        void SetType(wxString &type);

        ElementEffects* GetElementEffects();
        void SortElementEffects();

        int GetIndex();
        void SetIndex(int index);

        int Index;

        void AddEffect(wxString &effect, double startTime,double endTime, bool Protected);


    protected:
    private:
        int mIndex;
        wxString mName;
        wxString mElementType;
        bool mVisible;
        bool mCollapsed;
        ElementEffects mElementEffects;

};

#endif // ELEMENT_H
