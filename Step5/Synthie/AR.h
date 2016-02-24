/**
 * \file AR.h
 *
 * \author Daniel Ken-Wah Lau
 *
 * 
 */

#pragma once
#include "AudioNode.h"
/**
 * 		  Attack/Release Class
 */
class CAR :
	public CAudioNode
{
public:
	CAR();
	virtual ~CAR();

	virtual void Start() {};
	virtual bool Generate(){ return false; };

	void SetSource(CAudioNode * source);

private:
	double m_attack;
	double m_release;
	double m_duration;
	double m_time;

	CAudioNode * m_source;
};

