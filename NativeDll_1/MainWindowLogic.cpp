#include "pch.h"
#include "MainWindowLogic.h"


Core::MainWindowLogic::MainWindowLogic()
{
	
}


std::int32_t Core::MainWindowLogic::AddClicks()
{
	m_clicks++;
	return m_clicks;
}