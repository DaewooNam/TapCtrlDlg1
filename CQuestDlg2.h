#pragma once


// CQuestDlg2 대화 상자

class CQuestDlg2 : public CDialogEx
{
	DECLARE_DYNAMIC(CQuestDlg2)

public:
	CQuestDlg2(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CQuestDlg2();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_QUEST2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
};
