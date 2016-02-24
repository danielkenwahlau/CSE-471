/**
* \file Instrument.cpp
*
* \author Daniel Ken-Wah Lau
*/

#include "stdafx.h"
#include "Instrument.h"
#include "Synthesizer.h"


/**
* 		  constructor
*/
CInstrument::CInstrument()
{
}


/**
* 		  destructor
*/
CInstrument::~CInstrument()
{
}

/**
 * 		  sets the pointer to the synthesizer that the instrument is associated with
 * Also sets the bpm for future reference
 * \param synthesizer 
 */
void CInstrument::SetSynthesizer(CSynthesizer * synthesizer)
{
	m_synthesizer = synthesizer;
	m_bpm = m_synthesizer->GetBpm();
}