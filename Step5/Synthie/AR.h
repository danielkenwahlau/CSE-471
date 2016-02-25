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

	virtual void Start();
	virtual bool Generate();

	void SetSource(CAudioNode * source);
	void SetBpm(double bpm) { m_bpm = bpm; };

private:
	double m_attack = .05;
	double m_release = .05;
	double m_duration = .5;
	double m_time;

	CAudioNode * m_source;
};

