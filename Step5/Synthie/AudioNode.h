/**
* \file AudioNode.h
*
* \author Daniel Ken-Wah Lau
*
* Abstract class that process/generate audio
*/

#pragma once
/**
* 		  Audio node class
*/
class CAudioNode
{
public:
	CAudioNode();
	virtual ~CAudioNode();

public:
	//! Start the node generation
	virtual void Start() = 0;

	//! Cause one sample to be generated
	virtual bool Generate() = 0;

	//! Get the sample rate in samples per second
	double GetSampleRate() { return m_sampleRate; }

	//! Get the sample period in seconds
	double GetSamplePeriod() { return m_samplePeriod; }

	//get bpm
	double GetBpm() { return m_bpm; };

	//! Set the sample rate
	void SetSampleRate(double s) { m_sampleRate = s;  m_samplePeriod = 1 / s; }

	//! Access a generated audio frame
	const double *Frame() { return m_frame; }

	//! Access one channel of a generated audio frame
	double Frame(int c) { return m_frame[c]; }

protected:
	double m_sampleRate;
	double m_samplePeriod;
	double m_frame[2];

	double  m_bpm; //!< Beats per minute
};

