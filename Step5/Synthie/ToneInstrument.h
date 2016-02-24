/**
* \file ToneInstrument.h
*
* \author Daniel Ken-Wah Lau
*
*
*/

#pragma once
#include "Instrument.h"
#include "SineWave.h"
#include "AR.h"
/**
* 		  Tonal instrument Class
*/
class CToneInstrument :
	public CInstrument
{
public:
	CToneInstrument();
	virtual ~CToneInstrument();

public:
	virtual void Start();
	virtual bool Generate();

	void SetFreq(double f) { m_sinewave.SetFreq(f); }
	void SetAmplitude(double a) { m_sinewave.SetAmplitude(a); }
	void SetDuration(double d) { m_duration = d; }

	virtual void SetNote(CNote *note);

private:
	CSineWave m_sinewave;
	double m_duration;
	double m_time;

	CAR m_ar;
};

