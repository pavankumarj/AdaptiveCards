﻿//
// MainPage.xaml.h
// Declaration of the MainPage class.
//

#pragma once

#include "MainPage.g.h"

namespace PerfApp
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	public ref class MainPage sealed
	{
	public:
		MainPage();

	private:
		AdaptiveCards::Rendering::Uwp::AdaptiveCardRenderer ^ m_renderer;
		ULONGLONG totalParseTicks;
		ULONGLONG totalRenderTicks;
		ULONGLONG count;
	};
}
