# MLog
MLog gives you more debugging information which you don't get with traditional NSLog, like method name, line number etc.

###How to use it?

Use MLog/MDLog difference is, one prints date and time other doesn't
'D' in the MDLog represents that it prints date. The output is like
`<ReferceOfObject> -[ClassName methodName] [#LineNumber]| This is your message.`

MCLog is used for C functions which doesn't include self or you can use in blocks to aviod retained self


###How to disable logs?
In release mode all logs are disabled but if you want to disable it in debug mode also then just comment the line where `ENABLE_M_LOGS` macro is defined

### Development

Want to contribute? Great!

Fork the repo and send me the pull request :)


### License
MIT


**Free Software, Hell Yeah!**







