
// TapCtrlDlgDlg.h: 헤더 파일
//

#pragma once

enum DLGTYPE {DT_QUEST1, DT_QUEST2, DT_QUEST3,DT_MAX};

// CTapCtrlDlgDlg 대화 상자
class CTapCtrlDlgDlg : public CDialogEx
{
// 생성입니다.
public:
	CTapCtrlDlgDlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TAPCTRLDLG_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
//	afx_msg void OnTcnSelchangeTabMain(NMHDR *pNMHDR, LRESULT *pResult);
	// 미리 선언을 해 놓음
	CTabCtrl*		m_pTabCtrl;		//텝 컨트롤 주소
	DLGTYPE			m_enDlgType;    //추가된 3가지 다이얼로그 주소
	CDialog*		m_pDlg[DT_MAX]; //현재 활성된 다잉얼로그 주소
	CDialog*		m_pCurrDlg;     //enum 현재 상태

	afx_msg void OnTcnSelchangeTabMain(NMHDR *pNMHDR, LRESULT *pResult);
	virtual BOOL DestroyWindow();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
};
