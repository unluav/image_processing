#pragma once

#include "iFilter.h"

class TestFilter : public IFilter
{
public:
	virtual cv::Mat processFrame(cv::Mat& frame);
};
