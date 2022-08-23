#pragma once

#define TIMERS_DEVICE 0x8001

#define IOCTL_TIMERS_SET_ONESHOT	CTL_CODE(TIMERS_DEVICE, 0x800, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_TIMERS_SET_PREIODIC	CTL_CODE(TIMERS_DEVICE, 0x801, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_TIMERS_GET_RESOLUTION CTL_CODE(TIMERS_DEVICE, 0x802, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_TIMERS_SET_HIRES		CTL_CODE(TIMERS_DEVICE, 0x803, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_TIMERS_STOP			CTL_CODE(TIMERS_DEVICE, 0x804, METHOD_NEITHER, FILE_ANY_ACCESS)

struct TimerResolution {
	ULONG Maximum;
	ULONG Minimum;
	ULONG Current;
	ULONG Increment;
};

struct PeriodicTimer {
	ULONG Interval;
	ULONG Period;
};