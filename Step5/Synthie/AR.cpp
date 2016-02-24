/**
 * \file AR.cpp
 *
 * \author Daniel Ken-Wah Lau
 */

#include "stdafx.h"
#include "AR.h"


/**
 * 		  constructor
 */
CAR::CAR()
{
}


/**
 * 		  destructor
 */
CAR::~CAR()
{
}

void CAR::SetSource(CAudioNode * source)
{
	m_source = source;
}