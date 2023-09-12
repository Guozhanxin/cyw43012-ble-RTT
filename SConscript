from building import *
import rtconfig
Import('RTT_ROOT')

# get current directory
cwd = GetCurrentDir()
src = []

# The set of source files associated with this SConscript file.
src = Split('''
            ''')

path = [cwd]

src += ["btstack-integration/COMPONENT_HCI-UART/common/cybt_hci_rx_task.c", 
        "btstack-integration/COMPONENT_HCI-UART/common/cybt_hci_tx_task.c", 
        "btstack-integration/COMPONENT_HCI-UART/common/cybt_host_stack_platform_interface.c", 
        "btstack-integration/COMPONENT_HCI-UART/common/cybt_patchram_download.c", 
        "btstack-integration/COMPONENT_HCI-UART/common/cybt_platform_main.c", 
        "btstack-integration/COMPONENT_HCI-UART/common/cybt_platform_task.c", 
        "btstack-integration/COMPONENT_HCI-UART/common/cybt_platform_trace.c", 
        "btstack-integration/COMPONENT_HCI-UART/common/cybt_prm.c", 
        "btstack-integration/COMPONENT_HCI-UART/debug/cybt_debug_uart.c", 
        "btstack-integration/COMPONENT_HCI-UART/firmware/COMPONENT_43012/COMPONENT_AW-AM497/w_bt_firmware_controller.c", 
        "btstack-integration/COMPONENT_HCI-UART/freertos/cybt_platform_freertos.c"
        ]

path += [
        cwd + "/btstack-integration/COMPONENT_HCI-UART/common",
        cwd + "/btstack-integration/COMPONENT_HCI-UART",
        cwd + "/btstack-integration",
        cwd + "/btstack-integration/COMPONENT_HCI-UART/debug",
        cwd + "/btstack-integration/COMPONENT_HCI-UART/include"
        ]

src += ["abstraction-rtos/source/COMPONENT_FREERTOS/cyabs_freertos_common.c", 
        "abstraction-rtos/source/COMPONENT_FREERTOS/cyabs_freertos_helpers.c", 
        "abstraction-rtos/source/COMPONENT_FREERTOS/cyabs_rtos_dsram.c", 
        "abstraction-rtos/source/COMPONENT_FREERTOS/cyabs_rtos_freertos.c", 
        "abstraction-rtos/source/cy_worker_thread.c"
        ]

path += [
        cwd + "/abstraction-rtos/include",
        cwd + "/abstraction-rtos",
        cwd + "/abstraction-rtos/include/COMPONENT_FREERTOS"
        ]
src += [
        "kv-store/mtb_kvstore.c", 
        "retarget-io/cy_retarget_io.c"
        ]

path += [
        cwd + "/retarget-io",
        cwd + "/kv-store"
        ]

path += [
        cwd + "/btstack/wiced_include",
        cwd + "/btstack"
        ]
# TOODO add btstack lib

LIBPATH = [cwd + '/btstack/stack/COMPONENT_WICED_BLE/COMPONENT_CM4/COMPONENT_HARDFP/TOOLCHAIN_GCC_ARM']
LIBS = ['btstack']

group = DefineGroup('Libraries', src, depend=[''], CPPPATH=path, LIBPATH=LIBPATH, LIBS=LIBS)

Return('group')