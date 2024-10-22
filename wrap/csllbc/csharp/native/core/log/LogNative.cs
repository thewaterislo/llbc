// The MIT License (MIT)

// Copyright (c) 2013-2024 lailongwei<lailongwei@126.com>
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy of 
// this software and associated documentation files (the "Software"), to deal in 
// the Software without restriction, including without limitation the rights to 
// use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of 
// the Software, and to permit persons to whom the Software is furnished to do so, 
// subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in all 
// copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS 
// FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR 
// COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER 
// IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN 
// CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

//!!! This file is auto generated by script tool, do not modify it!!!

using System;
using System.Runtime.InteropServices;

namespace llbc
{

    /// <summary>
    /// Wrap core/log/_Log.h file defined c functions
    /// </summary>
    internal partial class LLBCNative
    {
        [DllImport(NativeLibName, CallingConvention = CallingConvention.Cdecl)]
        public extern static int csllbc_Log_Init(IntPtr cfgFile);

        [DllImport(NativeLibName, CallingConvention = CallingConvention.Cdecl)]
        public extern static int csllbc_Log_IsInited();

        [DllImport(NativeLibName, CallingConvention = CallingConvention.Cdecl)]
        public extern static IntPtr csllbc_Log_GetLogger(IntPtr loggerName);

        [DllImport(NativeLibName, CallingConvention = CallingConvention.Cdecl)]
        public extern static int csllbc_Log_GetLogLevel(IntPtr logger);

        [DllImport(NativeLibName, CallingConvention = CallingConvention.Cdecl)]
        public extern static int csllbc_Log_LogMsg(IntPtr logger,
                                                   IntPtr fileName,
                                                   int lineNo,
                                                   IntPtr func,
                                                   int level,
                                                   IntPtr msg,
                                                   IntPtr tag);

        [DllImport(NativeLibName, CallingConvention = CallingConvention.Cdecl)]
        public extern static void csllbc_Log_Destroy();
    }
}
