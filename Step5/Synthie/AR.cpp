/**
 * \file AR.cpp
 *
 * \author Daniel Ken-Wah Lau
 */

#include "stdafx.h"
#include "AR.h"
#include "ToneInstrument.h"


/**
 * 		  constructor
 */
CAR::CAR()
{
	m_duration = 0.1;
	m_bpm = 120;
}


/**
 * 		  destructor
 */
CAR::~CAR()
{
}

/**
 * 		  sets the source
 * \param source 
 */
void CAR::SetSource(CAudioNode * source)
{
	m_source = source;
	m_bpm = m_source->GetBpm();
}

void CAR::Start()
{
	m_time = 0;
}

bool CAR::Generate()
{

	m_source->Generate();

	m_frame[0] = m_source->Frame(0);
	m_frame[1] = m_source->Frame(1);

	// We return true until the time reaches the duration.
	//seconds per beat * number of beats

	m_time += GetSamplePeriod();

	/*double timeHeld = 1 / (m_bpm / 60)*m_duration;*/
	double timeHeld = 1.0 / (m_bpm / 60.0) * m_duration;

	//return m_time < beatsHeld;
	//return m_time < timeHeld;
	return m_time < .5;

}
