
// dipView.cpp : implementation of the CdipView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "dip.h"
#endif

#include "dipDoc.h"
#include "dipView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CdipView

IMPLEMENT_DYNCREATE(CdipView, CView)

BEGIN_MESSAGE_MAP(CdipView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CdipView construction/destruction

CdipView::CdipView()
{
	// TODO: add construction code here

}

CdipView::~CdipView()
{
}

BOOL CdipView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CdipView drawing

void CdipView::OnDraw(CDC* /*pDC*/)
{
	CdipDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CdipView printing

BOOL CdipView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CdipView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CdipView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CdipView diagnostics

#ifdef _DEBUG
void CdipView::AssertValid() const
{
	CView::AssertValid();
}

void CdipView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CdipDoc* CdipView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CdipDoc)));
	return (CdipDoc*)m_pDocument;
}
#endif //_DEBUG


// CdipView message handlers
