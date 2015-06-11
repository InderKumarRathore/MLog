//
//  MLog.h
//
//  Created by Inder Kumar Rathore on 08/07/13.
//  Copyright (c) 2013 Inder Kumar Rathore. All rights reserved.
//

/* How to use it?
 * Use MLog/MDLog differne is, one prints date and time other doesn't
 * 'D' in the MDLog represents that it prints date. The output is like
 * {<ReferceOfObject> -[ClassName methodName] (LineNumber)}$ This is your message.
 *
 * MCLog is used for C functions which doesn't include self or you can use in blocks to aviod retained self
 *
 * How to disable logs?
 * How to disable logs?
 * In release mode all logs are disabled but if you want to disable it in debug mode also then just comment the line where ENABLE_M_LOGS macro is defined
 */

#ifdef DEBUG
//Comment below define to diable all logs in debug, in release mode it is automatically disabled
#define ENABLE_M_LOGS
#endif

#ifdef ENABLE_M_LOGS

// This will output showing date and time as shown by MLog
#define MDLog(format, ...) NSLog(@"<%p> %s [#%d]| "format@"\n\n", self, __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)

#if __has_feature(objc_arc)

// This will output without showing date and time as shown by MLog
#define MLog(format, ...) CFShow((__bridge CFTypeRef)[NSString stringWithFormat:@"<%p> %s [#%d]| "format@"\n\n", self, __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__])

//This is used for plain C function where self doesn't exists
#define MCLog(format, ...) CFShow((__bridge CFTypeRef)[NSString stringWithFormat:@"%s [#%d]| "format@"\n\n", __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__])

#else
// This will output without showing date and time as shown by MLog
#define MLog(format, ...) CFShow([NSString stringWithFormat:@"<%p> %s [#%d]| "format@"\n\n", self, __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__])

//This is used for plain C function where self doesn't exists
#define MCLog(format, ...) CFShow([NSString stringWithFormat:@"%s [#%d]| "format@"\n\n", __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__])
#endif

#else
#define MLog(...)
#define MDLog(...)
#define MCLog(...)
#endif

#define NSLog(...) NSLog-Depricated

