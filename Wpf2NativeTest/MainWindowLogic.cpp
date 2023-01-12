#include "pch.h"

#include <iostream>

#include "NativeWrappers.h"

using namespace NativeWrappers;

MainWindowLogic::MainWindowLogic()
	: NativeInstance(new Core::MainWindowLogic())
{
}

int MainWindowLogic::AddClicks()
{
	return m_Instance->AddClicks(); //call the native implementation
}
