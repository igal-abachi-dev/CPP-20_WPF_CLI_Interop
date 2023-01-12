#pragma once
#include <cstdint>
#define DllExport   __declspec( dllexport )
 
//https://learn.microsoft.com/en-us/cpp/cpp/dllexport-dllimport?view=msvc-170
namespace Core
{
	 class DllExport MainWindowLogic
	{
		
		std::int32_t m_clicks = 0;
	public:
		MainWindowLogic();

		std::int32_t AddClicks();
	};
}

