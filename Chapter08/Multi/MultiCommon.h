#pragma once

#define DEVICE_MULTI 0x8008

#define IOCTL_MULTI_TEST_POOLS CTL_CODE(DEVICE_MULTI, 0x800, METHOD_NEITHER, FILE_ANY_ACCESS)