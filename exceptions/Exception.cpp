#include "Exception.h"
#include <string.h>
Exception::Exception(const char* message) { strcpy_s(m_message, message); }
const char* Exception::GetMessage() const { return m_message; }