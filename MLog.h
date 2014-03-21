//
//  MLog.h
//
//  Created by Inder Kumar Rathore on 08/07/13.
//  Copyright (c) 2013 Inder Kumar Rathore. All rights reserved.
//

/* How to use it?
 * Use MLog/MDLog difference is, one prints date and time other doesn't
 * 'D' in the MDLog represents that it prints date. The output is like
 * <ReferceOfObject> -[ClassName methodName] [#LineNumber]| This is your message.
 *
 * MCLog is used for C functions which doesn't include self
 *
 * How to disable logs?
 * Just comment the line where you have defined ENABLE_M_LOGS macro
 */

//Comment below define to diable all logs
#define ENABLE_M_LOGS

#ifdef ENABLE_M_LOGS
// This will output without showing date and time as shown by MLog
#define MLog(format, ...) CFShow([NSString stringWithFormat:@"<%p> %s [#%d]| "format, self, __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__])

// This will output showing date and time as shown by MLog
#define MDLog(format, ...) NSLog(@"<%p> %s [#%d]| "format, self, __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)

//This is used for plain C function where self doesn't exists
#define MCLog(format, ...) CFShow([NSString stringWithFormat:@"%s [#%d]| "format, __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__])

#else
#define MLog(...)
#define MDLog(...)
#define MCLog(...)
#endif
