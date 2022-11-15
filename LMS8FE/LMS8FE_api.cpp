#include "LMS8FE_constants.h"
// #include "lms7_device.h"
#include "LMS8FE_Device.h"
#include <cstdint>
// milans 220420
// #include "Logger.h"

#define SERIAL_BAUDRATE 9600
// #define SERIAL_BAUDRATE 115200

/****************************************************************************
 *
 *   LimeLMS8FE API Functions
 *
 *****************************************************************************/
extern "C" API_EXPORT lms8fe_dev_t *CALL_CONV LMS8FE_Open(const char *serialport, lms_device_t *dev)
{
    if (dev == nullptr && serialport == nullptr)
        return nullptr;

    int result;

    LMS8FE_COM com;
    com.fd = -1;
#ifndef __unix__
    com.hComm = 0;
#endif
    if (serialport != nullptr)
    {
        result = Lms8fe_serialport_init(serialport, SERIAL_BAUDRATE, &com);
        if (result == -1)
            return nullptr;
        // milans 220421
        //		result = Cmd_Hello(com);
        //         if (result == LMS8FE_ERROR_COMM) {
        //             return nullptr;
        //         }
    }
    return new LMS8FE_Device(dev, com);
}

extern "C" API_EXPORT void CALL_CONV LMS8FE_Close(lms8fe_dev_t *lms8fe)
{
    if (!lms8fe)
        return;
    auto *dev = static_cast<LMS8FE_Device *>(lms8fe);
    if ((dev->com).fd >= 0)
        Lms8fe_serialport_close(dev->com);
    delete dev;
}

extern "C" API_EXPORT int CALL_CONV LMS8FE_GetInfo(lms8fe_dev_t *lms8fe, unsigned char *cinfo)
{
    Lms8fe_boardInfo info;
    int result = 0;
    if (!lms8fe)
        return -1;
    auto *dev = static_cast<LMS8FE_Device *>(lms8fe);
    result = Lms8fe_Cmd_GetInfo(dev->sdrDevice, dev->com, &info);
    cinfo[0] = info.fw_ver;
    cinfo[1] = info.hw_ver;
    cinfo[2] = info.status1;
    cinfo[3] = info.status2;

    return result;
}

extern "C" API_EXPORT int LMS8FE_LoadConfig(lms8fe_dev_t *lms8fe, const char *filename)
{

    int result = 0;
    if (!lms8fe)
        return -1;
    auto *dev = static_cast<LMS8FE_Device *>(lms8fe);

    result = Lms8fe_Cmd_LoadConfig(dev->sdrDevice, dev->com, filename);

    //        if (result == 0)
    //            dev->UpdateState();

    return result;
}

extern "C" API_EXPORT int LMS8FE_Reset(lms8fe_dev_t *lms8fe)
{
    int result = 0;

    if (!lms8fe)
        return -1;
    auto *dev = static_cast<LMS8FE_Device *>(lms8fe);

    result = Lms8fe_Cmd_Reset(dev->sdrDevice, dev->com);

    //        if (result == 0)
    //            dev->UpdateState();

    return result;
}

extern "C" API_EXPORT int LMS8FE_Configure(lms8fe_dev_t *lms8fe, char channelIDRX, char channelIDTX, char portRX, char portTX, char mode, char notch, char attenuation, char enableSWR, char sourceSWR)
{
    lms8fe_boardState state = {channelIDRX, channelIDTX, portRX, portTX, mode, notch, attenuation, enableSWR, sourceSWR};
    return LMS8FE_ConfigureState(lms8fe, state);
}

extern "C" API_EXPORT int LMS8FE_ConfigureState(lms8fe_dev_t *lms8fe, lms8fe_boardState state)
{
    int result = 0;
    /*
            if (!lms8fe)
                return -1;
            auto* dev = static_cast<LMS8FE_Device*>(lms8fe);

    //        dev->AutoFreq(state);

        result = Cmd_Configure(dev->sdrDevice, dev->com, state.channelIDRX, state.channelIDTX, state.selPortRX, state.selPortTX, state.mode, state.notchOnOff, state.attValue, state.enableSWR, state.sourceSWR);

            if (result == 0)
    //            dev->UpdateState(state);
    */
    return result;
}

extern "C" API_EXPORT int LMS8FE_GetState(lms8fe_dev_t *lms8fe, lms8fe_boardState *state)
{
    int result = 0;

    if (!lms8fe)
        return -1;
    auto *dev = static_cast<LMS8FE_Device *>(lms8fe);

    result = Lms8fe_Cmd_GetConfig(dev->sdrDevice, dev->com, state);

    return result;
}

extern "C" API_EXPORT int LMS8FE_Mode(lms8fe_dev_t *lms8fe, int mode)
{
    int result = 0;

    if (!lms8fe)
        return -1;
    auto *dev = static_cast<LMS8FE_Device *>(lms8fe);

    result = Lms8fe_Cmd_Mode(dev->sdrDevice, dev->com, mode);

    //        if (result == 0)
    //            dev->UpdateState(mode);
    return result;
}

extern "C" API_EXPORT int LMS8FE_ReadADC(lms8fe_dev_t *lms8fe, int adcID, int *value)
{
    if (!lms8fe)
        return -1;
    auto *dev = static_cast<LMS8FE_Device *>(lms8fe);

    return Lms8fe_Cmd_ReadADC(dev->sdrDevice, dev->com, adcID, value);
}

extern "C" API_EXPORT int LMS8FE_ConfGPIO(lms8fe_dev_t *lms8fe, int gpioNum, int direction)
{
    if (!lms8fe)
        return -1;
    auto *dev = static_cast<LMS8FE_Device *>(lms8fe);

    return Lms8fe_Cmd_ConfGPIO(dev->sdrDevice, dev->com, gpioNum, direction);
}

extern "C" API_EXPORT int LMS8FE_SetGPIO(lms8fe_dev_t *lms8fe, int gpioNum, int val)
{
    if (!lms8fe)
        return -1;
    auto *dev = static_cast<LMS8FE_Device *>(lms8fe);

    return Lms8fe_Cmd_SetGPIO(dev->sdrDevice, dev->com, gpioNum, val);
}

extern "C" API_EXPORT int LMS8FE_GetGPIO(lms8fe_dev_t *lms8fe, int gpioNum, int *val)
{
    if (!lms8fe)
        return -1;
    auto *dev = static_cast<LMS8FE_Device *>(lms8fe);

    return Lms8fe_Cmd_GetGPIO(dev->sdrDevice, dev->com, gpioNum, val);
}

API_EXPORT int CALL_CONV LMS8FE_AssignSDRChannels(lms8fe_dev_t *lms8fe, int rx, int tx)
{
    if (!lms8fe)
        return -1;
    auto *dev = static_cast<LMS8FE_Device *>(lms8fe);
    //    dev->SetChannels(rx, tx);
    return 0;
}

extern "C" API_EXPORT int LMS8FE_Fan(lms8fe_dev_t *lms8fe, int enable)
{
    if (!lms8fe)
        return -1;
    auto *dev = static_cast<LMS8FE_Device *>(lms8fe);

    return Lms8fe_Cmd_Fan(dev->sdrDevice, dev->com, enable);
}

extern "C" API_EXPORT int LMS8FE_Diode(lms8fe_dev_t *lms8fe, int state)
{
    if (!lms8fe)
        return -1;
    auto *dev = static_cast<LMS8FE_Device *>(lms8fe);

    return Lms8fe_Cmd_Diode(dev->sdrDevice, dev->com, state);
}

extern "C" API_EXPORT int LMS8FE_DiodeSPI(lms8fe_dev_t *lms8fe, int state)
{
    if (!lms8fe)
        return -1;
    auto *dev = static_cast<LMS8FE_Device *>(lms8fe);

    return Lms8fe_Cmd_DiodeSPI(dev->sdrDevice, dev->com, state);
}

extern "C" API_EXPORT int LMS8FE_SC1905_SPI_Message_Memory(lms8fe_dev_t *lms8fe, uint16_t address, uint8_t *val, bool isRead, int bytesNo, bool isEEPROM)
{
    if (!lms8fe)
        return -1;
    auto *dev = static_cast<LMS8FE_Device *>(lms8fe);

    return Lms8fe_Cmd_SC1905_SPI_Message_Memory(dev->sdrDevice, dev->com, address, val, isRead, bytesNo, isEEPROM);
}

extern "C" API_EXPORT int LMS8FE_SC1905_SPI_Special_Command(lms8fe_dev_t *lms8fe, int command)
{
    if (!lms8fe)
        return -1;
    auto *dev = static_cast<LMS8FE_Device *>(lms8fe);

    return Lms8fe_Cmd_SC1905_SPI_Special_Command(dev->sdrDevice, dev->com, command);
}

extern "C" API_EXPORT int LMS8FE_SC1905_Reset(lms8fe_dev_t *lms8fe)
{
    if (!lms8fe)
        return -1;
    auto *dev = static_cast<LMS8FE_Device *>(lms8fe);

    return Lms8fe_Cmd_SC1905_Reset(dev->sdrDevice, dev->com);
}

extern "C" API_EXPORT int LMS8FE_SC1905_Apply_Frequency(lms8fe_dev_t *lms8fe, int freqRange, int minFreq, int maxFreq)
{
    if (!lms8fe)
        return -1;
    auto *dev = static_cast<LMS8FE_Device *>(lms8fe);

    return Lms8fe_Cmd_SC1905_Apply_Frequency(dev->sdrDevice, dev->com, freqRange, minFreq, maxFreq);
}

extern "C" API_EXPORT int LMS8FE_Set_Config_Full(lms8fe_dev_t *lms8fe, uint8_t *state, int size)
{
    if (!lms8fe)
        return -1;
    auto *dev = static_cast<LMS8FE_Device *>(lms8fe);

    return Lms8fe_Cmd_Set_Config_Full(dev->sdrDevice, dev->com, state, size);
}

extern "C" API_EXPORT int LMS8FE_Get_Config_Full(lms8fe_dev_t *lms8fe, uint8_t *state, int size)
{
    if (!lms8fe)
        return -1;
    auto *dev = static_cast<LMS8FE_Device *>(lms8fe);

    return Lms8fe_Cmd_Get_Config_Full(dev->sdrDevice, dev->com, state, size);
}