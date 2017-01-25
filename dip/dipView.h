
// dipView.h : interface of the CdipView class
//

#pragma once


class CdipView : public CView
{
protected: // create from serialization only
	CdipView();
	DECLARE_DYNCREATE(CdipView)

// Attributes
public:
	CdipDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CdipView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in dipView.cpp
inline CdipDoc* CdipView::GetDocument() const
   { return reinterpret_cast<CdipDoc*>(m_pDocument); }
#endif

