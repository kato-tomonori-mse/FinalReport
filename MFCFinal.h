
// MFCFinal.h : PROJECT_NAME アプリケーションのメイン ヘッダー ファイルです
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH に対してこのファイルをインクルードする前に 'pch.h' をインクルードしてください"
#endif

#include "resource.h"		// メイン シンボル


// CMFCFinalApp:
// このクラスの実装については、MFCFinal.cpp を参照してください
//

class CMFCFinalApp : public CWinApp
{
public:
	CMFCFinalApp();

// オーバーライド
public:
	virtual BOOL InitInstance();

// 実装

	DECLARE_MESSAGE_MAP()
};

extern CMFCFinalApp theApp;
