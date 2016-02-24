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
};

