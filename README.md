MLog
====

MLog gives you more debugging information which you don't get with traditional NSLog, like method name, line number etc.


How to use it?
Use MLog/MDLog difference is, one prints date and time other doesn't
'D' in the MDLog represents that it prints date. The output is like
`<ReferceOfObject> -[ClassName methodName] [#LineNumber]| This is your message.`

MCLog is used for C functions which doesn't include self

How to disable logs?
Just comment the line where `ENABLE_M_LOGS` macro is defined



