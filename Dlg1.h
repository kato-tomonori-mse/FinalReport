#pragma once


// Dlg1 ダイアログ

class Dlg1 : public CDialogEx
{
	DECLARE_DYNAMIC(Dlg1)

public:
	Dlg1(CWnd* pParent = nullptr);   // 標準コンストラクター
	virtual ~Dlg1();

// ダイアログ データ
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Dlg1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV サポート

	DECLARE_MESSAGE_MAP()
public:
	CString Edit1;
	afx_msg void OnBnClickedButton1();
};
