// CQuestDlg1.cpp: 구현 파일
//

#include "stdafx.h"
#include "TapCtrlDlg.h"
#include "CQuestDlg1.h"
#include "afxdialogex.h"


// CQuestDlg1 대화 상자

IMPLEMENT_DYNAMIC(CQuestDlg1, CDialogEx)

CQuestDlg1::CQuestDlg1(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_QUEST1, pParent)
{

}

CQuestDlg1::~CQuestDlg1()
{
}

void CQuestDlg1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CQuestDlg1, CDialogEx)
END_MESSAGE_MAP()


// CQuestDlg1 메시지 처리기
