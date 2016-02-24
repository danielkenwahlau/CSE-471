/**
* \file SineWave.cpp
*
* \author Daniel Ken-Wah Lau
*/

#include "stdafx.h"
#include "SineWave.h"


/**
* 		  constructor
*/
CSineWave::CSineWave()
{
	m_freq = 440.0;
	m_amp = 0.1;
	m_phase = 0.0;
}


/**
* 		  destructor
*/
CSineWave::~CSineWave()
{
}

/**
* 		  start function
*/
void CSineWave::Start()
{
	m_phase = 0;
}

/**
* 		  generate function
* \returns true
*/
bool CSineWave::Generate()
{
	m_frame[0] = m_amp * sin(m_phase * 2 * PI);
	m_frame[1] = m_frame[0];

	m_phase += m_freq * GetSamplePeriod();

	return true;
}