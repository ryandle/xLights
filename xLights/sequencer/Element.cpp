#include "Element.h"

Element::Element(wxString &name, wxString &type,bool visible,bool collapsed)
:mElementEffects()
{
    mName = name;
    mElementType = type;
    mVisible = visible;
    mCollapsed = collapsed;
}

Element::~Element()
{
}


wxString Element::GetName()
{
    return mName;
}

void Element::SetName(wxString &name)
{
    mName = name;
}

bool Element::GetVisible()
{
    return mVisible;
}

void Element::SetVisible(bool visible)
{
    mVisible = visible;
}

bool Element::GetCollapsed()
{
    return mCollapsed;
}

void Element::SetCollapsed(bool collapsed)
{
    mCollapsed = collapsed;
}

wxString Element::GetType()
{
    return mElementType;
}

void Element::SetType(wxString &type)
{
    mElementType = type;
}

int Element::GetIndex()
{
    return mIndex;
}

void Element::SetIndex(int index)
{
    mIndex = index;
}

ElementEffects* Element::GetElementEffects()
{
    return &mElementEffects;
}

void Element::SortElementEffects()
{
    mElementEffects.Sort();
}

void Element::AddEffect(wxString &effect, double startTime,double endTime, bool Protected)
{
    mElementEffects.AddEffect(effect,startTime,endTime,Protected);
}

