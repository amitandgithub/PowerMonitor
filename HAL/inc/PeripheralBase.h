//******************
// CLASS: PeripheralBase
//
// DESCRIPTION:
//  This is the base class for the peripheral without interrupt functionality
//
// CREATED: 10-01-2018, by Amit Chaudhary
//
// FILE: $FILE_FNAME$
//

#include"ClockManager.hpp"
#include"PortManager.hpp"
#include"InterruptManager.hpp"

namespace Bsp
{

class PeripheralBase
{
  protected:
    PeripheralBase(){};
    ~PeripheralBase(){};

	virtual bool HwInit() = 0;
	virtual bool HwConfig(void* pConfigStruct);
	virtual void HwEnable();
	virtual void HwDisable();
	virtual uint32_t HwGetFlagStatus(uint32_t aFlag );
	inline ClockManager*     GetClockManager()    { return ClockManager::GetInstance();}
	inline PortManager*      GetPortManager ()    { return PortManager::GetInstance();}  
};

} //namespace Bsp