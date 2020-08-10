// Dlg1.cpp : 実装ファイル
//

#include "pch.h"
#include "MFCFinal.h"
#include "Dlg1.h"
#include "afxdialogex.h"
#include "test1.h"


// Dlg1 ダイアログ

IMPLEMENT_DYNAMIC(Dlg1, CDialogEx)

Dlg1::Dlg1(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_Dlg1, pParent)
	, Edit1(_T(""))
{

}

Dlg1::~Dlg1()
{
}

void Dlg1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, Edit1);
}


BEGIN_MESSAGE_MAP(Dlg1, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &Dlg1::OnBnClickedButton1)
END_MESSAGE_MAP()


void Dlg1::OnBnClickedButton1()
{
	// TODO: ここにコントロール通知ハンドラー コードを追加します。
	CWnd::UpdateData(TRUE);
	int n = 0;
	int m = 0;
	n = _ttoi(Edit1);
	m = handred(n);
	CString str1;
	str1.Format(_T("%d"), m);
	AfxMessageBox(str1);

}
