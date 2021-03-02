//
//  platforem.h
//  76-8
//
//  Created by hyungwook on 2021/03/02.
//

#define PLATFORM_UNKNOWN 0
#define PLATFORM_IOS 1
#define PLATFORM_ANDROID 2
#define PLATFORM_WIN32 3
#define PLATFORM_LINUX 4
#define PLATFORM_MAC 5

#if defined(IOS)
#define TARGET_PLATFORM PLATFORM_IOS
#endif

#if defined(ANDROID)
#define TARGET_PLATFORM PLATFORM_ANDROID
#endif

#if defined(WIN32) && defined(_WINDOWS)
#define TARGET_PLATFORM PLATFORM_WIN32
#endif

#if defined(LINUX)
#define TARGET_PLATFORM PLATFORM_LINUX
#endif

#if defined(MAC)
#define TARGET_PLATFORM PLATFORM_MAC
#endif

#if TARGET_PLATFORM == PLATFORM_ANDROID
#undef printf
#undef fprintf
#define printf printf
#define fprintf fprintf
#else
#undef printf
#undef fprintf
#define printf
#define fprintf
#endif
