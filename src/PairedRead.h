/*
 *   PairedRead.h
 *
 *   Author: mat and jtr
 */

#ifndef FLEXBAR_PAIREDREAD_H
#define FLEXBAR_PAIREDREAD_H


template <typename TString, typename TIDString>
class PairedRead {

public:
	
	typedef SeqRead<TString, TIDString> TSeqRead;
	
	TSeqRead *m_r1;
	TSeqRead *m_r2;
	TSeqRead *m_b;
	
	TString m_randTag;
	int m_barcode_id, m_barcode_id2;
	
	PairedRead(TSeqRead *r1, TSeqRead *r2, TSeqRead *b) :
		m_r1(r1),
		m_r2(r2),
		m_b(b),
		m_barcode_id(0),
		m_barcode_id2(0),
		m_randTag(""){
	};
	
	virtual ~PairedRead(){
		delete m_r1;
		delete m_r2;
		delete m_b;
	};
	
};

#endif
