// Dlg2.cpp : 実装ファイル
//

#include "pch.h"
#include "MFCFinal.h"
#include "Dlg2.h"
#include "afxdialogex.h"


// Dlg2 ダイアログ

IMPLEMENT_DYNAMIC(Dlg2, CDialogEx)

Dlg2::Dlg2(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_Dlg2, pParent)
{

}

Dlg2::~Dlg2()
{
}

void Dlg2::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_COMBO1, Combo1);
}

BOOL Dlg2::OnInitDialog() {
	Combo1.AddString(_T("A"));
	Combo1.SetCurSel(0);
	return 0;
}


BEGIN_MESSAGE_MAP(Dlg2, CDialogEx)
END_MESSAGE_MAP()


// Dlg2 メッセージ ハンドラー
