/**
* \file AudioNode.cpp
*
* \author Daniel Ken-Wah Lau
*/

#include "stdafx.h"
#include "AudioNode.h"


/**
* 		  constructor
*/
CAudioNode::CAudioNode()
{
	m_frame[0] = 0;
	m_frame[1] = 0;
	m_sampleRate = 44100;
	m_samplePeriod = 1.0 / 44100.0;
}


/**
* 		  destructor
*/
CAudioNode::~CAudioNode()
{
}
