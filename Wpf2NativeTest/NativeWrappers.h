#pragma once
#include "NativeInstance.h"

#include "MainWindowLogic.h"//from native dll

using namespace System;

//c++/cli doesn't support clang llvm for compilation , llvm-cmake is for native only
//https://www.youtube.com/watch?v=xTRTY-fOIe8
//https://www.youtube.com/watch?v=eVwlMct4EpA

//only c17 / c++17 supported for cli
//make sure wpf and cli are built x64 , not any cpu
//make sure wpf and cli are .net 7


namespace NativeWrappers {
	public ref class MainWindowLogic : public NativeInstance<Core::MainWindowLogic> //ref is a .net class , without it's native
	{
	public:
		MainWindowLogic();//ctor
		Int32 AddClicks();

		// property float YPosition
		// {
		// public:
		// 	float get()
		// 	{
		// 		return m_Instance->GetYPosition();
		// 	}
		// private:
		// 	void set(float value)
		// 	{
		// 	}
		// }
	};
}
/*
 use with:
 using (var nativeObject = new NativeClassWrapper()) {
	nativeObject.Method();
}
or class that inherits IDisposable

 */


 //this is in native dll , not in cli:
// namespace Core
// {
// 	class MainWindowLogic
// 	{
// 		std::int32_t m_clicks = 0;
// 	public:
// 		MainWindowLogic()
// 		{
// 			//std::wstring name
// 		}
//
// 		std::int32_t AddClicks()
// 		{
// 			m_clicks++;
// 			return m_clicks;
// 		}
// 	};
// }
