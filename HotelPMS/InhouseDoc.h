// InhouseDoc.h : CInhouseDoc クラスのインターフェイス
//


#pragma once


class CInhouseDoc : public CDocument
{
protected: // シリアル化からのみ作成します。
	CInhouseDoc();
	DECLARE_DYNCREATE(CInhouseDoc)

// 属性
public:

// 操作
public:

// オーバーライド
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);

// 実装
public:
	virtual ~CInhouseDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成された、メッセージ割り当て関数
protected:
	DECLARE_MESSAGE_MAP()
};


