/*++

Copyright (c) Microsoft Corporation. All Rights Reserved.

Module Name:

    UdecxUrb.h

Abstract:

    This is the interface for UDECX URB.

Environment:

    kernel mode only

Revision History:

--*/

//
// NOTE: This header is generated by stubwork.  Please make any 
//       modifications to the corresponding template files 
//       (.x or .y) and use stubwork to regenerate the header
//

#ifndef _UDECXURB_H_
#define _UDECXURB_H_

#ifndef WDF_EXTERN_C
  #ifdef __cplusplus
    #define WDF_EXTERN_C       extern "C"
    #define WDF_EXTERN_C_START extern "C" {
    #define WDF_EXTERN_C_END   }
  #else
    #define WDF_EXTERN_C
    #define WDF_EXTERN_C_START
    #define WDF_EXTERN_C_END
  #endif
#endif

WDF_EXTERN_C_START




//
// UDECX Function: UdecxUrbRetrieveControlSetupPacket
//
typedef
_Must_inspect_result_
WDFAPI
NTSTATUS
(*PFN_UDECXURBRETRIEVECONTROLSETUPPACKET)(
    _In_
    PUDECX_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFREQUEST Request,
    _Out_
    PWDF_USB_CONTROL_SETUP_PACKET SetupPacket
    );

_Must_inspect_result_
NTSTATUS
FORCEINLINE
UdecxUrbRetrieveControlSetupPacket(
    _In_
    WDFREQUEST Request,
    _Out_
    PWDF_USB_CONTROL_SETUP_PACKET SetupPacket
    )
{
    return ((PFN_UDECXURBRETRIEVECONTROLSETUPPACKET) UdecxFunctions[UdecxUrbRetrieveControlSetupPacketTableIndex])(UdecxDriverGlobals, Request, SetupPacket);
}

//
// UDECX Function: UdecxUrbRetrieveBuffer
//
typedef
_Must_inspect_result_
WDFAPI
NTSTATUS
(*PFN_UDECXURBRETRIEVEBUFFER)(
    _In_
    PUDECX_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFREQUEST Request,
    _Outptr_result_buffer_(*Length)
    PUCHAR* TransferBuffer,
    _Out_
    PULONG Length
    );

_Must_inspect_result_
NTSTATUS
FORCEINLINE
UdecxUrbRetrieveBuffer(
    _In_
    WDFREQUEST Request,
    _Outptr_result_buffer_(*Length)
    PUCHAR* TransferBuffer,
    _Out_
    PULONG Length
    )
{
    return ((PFN_UDECXURBRETRIEVEBUFFER) UdecxFunctions[UdecxUrbRetrieveBufferTableIndex])(UdecxDriverGlobals, Request, TransferBuffer, Length);
}

//
// UDECX Function: UdecxUrbSetBytesCompleted
//
typedef
WDFAPI
VOID
(*PFN_UDECXURBSETBYTESCOMPLETED)(
    _In_
    PUDECX_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFREQUEST Request,
    _In_
    ULONG BytesCompleted
    );

VOID
FORCEINLINE
UdecxUrbSetBytesCompleted(
    _In_
    WDFREQUEST Request,
    _In_
    ULONG BytesCompleted
    )
{
    ((PFN_UDECXURBSETBYTESCOMPLETED) UdecxFunctions[UdecxUrbSetBytesCompletedTableIndex])(UdecxDriverGlobals, Request, BytesCompleted);
}

//
// UDECX Function: UdecxUrbComplete
//
typedef
WDFAPI
VOID
(*PFN_UDECXURBCOMPLETE)(
    _In_
    PUDECX_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFREQUEST Request,
    _In_
    USBD_STATUS UsbdStatus
    );

VOID
FORCEINLINE
UdecxUrbComplete(
    _In_
    WDFREQUEST Request,
    _In_
    USBD_STATUS UsbdStatus
    )
{
    ((PFN_UDECXURBCOMPLETE) UdecxFunctions[UdecxUrbCompleteTableIndex])(UdecxDriverGlobals, Request, UsbdStatus);
}

//
// UDECX Function: UdecxUrbCompleteWithNtStatus
//
typedef
WDFAPI
VOID
(*PFN_UDECXURBCOMPLETEWITHNTSTATUS)(
    _In_
    PUDECX_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFREQUEST Request,
    _In_
    NTSTATUS NtStatus
    );

VOID
FORCEINLINE
UdecxUrbCompleteWithNtStatus(
    _In_
    WDFREQUEST Request,
    _In_
    NTSTATUS NtStatus
    )
{
    ((PFN_UDECXURBCOMPLETEWITHNTSTATUS) UdecxFunctions[UdecxUrbCompleteWithNtStatusTableIndex])(UdecxDriverGlobals, Request, NtStatus);
}



WDF_EXTERN_C_END

#endif // _UDECXURB_H_

