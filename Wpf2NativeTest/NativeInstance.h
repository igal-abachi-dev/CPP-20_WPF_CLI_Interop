#pragma once
namespace NativeWrappers {
	using namespace System::Runtime::InteropServices;
	static const char* string_to_char_array(System::String^ string)
	{
		const char* str = (const char*)(Marshal::StringToHGlobalAnsi(string)).ToPointer();
		return str;
	}

	template<class T>
	public ref class NativeInstance
	{
	protected:
		T* m_Instance;
	public:
		NativeInstance(T* instance)
			: m_Instance(instance)
		{
		}
		virtual ~NativeInstance()
		{
			this->!NativeInstance();
		}
		!NativeInstance()
		{
			if (m_Instance != nullptr)
			{
				delete m_Instance;
			}
		}
		T* GetInstance()
		{
			return m_Instance;
		}
	};
}