/**
* \file Instrument.h
*
* \author Daniel Ken-Wah Lau
*
*
*/

#pragma once
#include "AudioNode.h"
#include "Note.h"


class CSynthesizer;

/**
* 		  Instrument Class
*/
class CInstrument :
	public CAudioNode
{
public:
	CInstrument();
	virtual ~CInstrument();

	virtual void SetNote(CNote *note) = 0;

	void SetSynthesizer(CSynthesizer * synthesizer);

private:
	
	//CPicture * mPicture = nullptr;
	/// The synthesizer that the instrument knows about
	CSynthesizer * m_synthesizer = nullptr;
};

