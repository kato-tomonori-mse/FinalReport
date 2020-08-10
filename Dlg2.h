#pragma once


// Dlg2 ダイアログ

class Dlg2 : public CDialogEx
{
	DECLARE_DYNAMIC(Dlg2)

public:
	Dlg2(CWnd* pParent = nullptr);   // 標準コンストラクター
	virtual ~Dlg2();

// ダイアログ データ
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Dlg2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV サポート

	BOOL OnInitDialog();

	DECLARE_MESSAGE_MAP()
public:
	CComboBox Combo1;
};
