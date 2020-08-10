#pragma once


// Dlg3 ダイアログ

class Dlg3 : public CDialog
{
	DECLARE_DYNAMIC(Dlg3)

public:
	Dlg3(CWnd* pParent = nullptr);   // 標準コンストラクター
	virtual ~Dlg3();

// ダイアログ データ
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Dlg3 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV サポート


	DECLARE_MESSAGE_MAP()
};
