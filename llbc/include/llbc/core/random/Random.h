// The MIT License (MIT)

// Copyright (c) 2013 lailongwei<lailongwei@126.com>
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

#ifndef __LLBC_CORE_RANDOM_RANDOM_H__
#define __LLBC_CORE_RANDOM_RANDOM_H__

#include "llbc/common/Common.h"

#include "llbc/core/random/mtrand.h"

__LLBC_NS_BEGIN

/**
 * \brief The Random class encapsulation(using Mersenne Twister algorithm).
 */
class LLBC_EXPORT LLBC_Random
{
public:
    explicit LLBC_Random(int seed = 0);

public:
    /**
     * Initialize internal state of the random number generator.
     * @param[in] seed - seed for random-number generator.
     */
    void Seed(int seed);

    /**
     * Generate a random integer N such that: -2,147,483,648 <= N < 2,147,483,647.
     * @return int - the random integer N.
     */
    int Rand();

    /**
     * Generate a random integer N such that: 0 <= N < end for end >= 0 and end <= N < 0 for end < 0.
     * @return int - the random integer N.
     */
    int Rand(int end);

    /**
     * Generate a random integer N such that: begin <= N < end for begin <= end and end <= N < begin for begin > end.
     * @return int - the random integer N.
     */
    int Rand(int begin, int end);

    /**
     * Generate a floating point number N such that: 0 <= N < 1.
     * @return int - the random floating point number N.
     */
    double RandReal();

    /**
     * Random choose one element at given range.
     * @return _RandomAccessIter - the choose element iterator.
     */
    template <typename _RandomAccessIter>
    _RandomAccessIter Choice(const _RandomAccessIter &begin, const _RandomAccessIter &end);

private:
    MTRand_int32 _mtRand;
};

/**
 * Some global random support functions definition.
 */
LLBC_EXTERN LLBC_EXPORT void LLBC_SeedRand(int seed);
LLBC_EXTERN LLBC_EXPORT int LLBC_RandInt();
LLBC_EXTERN LLBC_EXPORT int LLBC_RandInt(int end);
LLBC_EXTERN LLBC_EXPORT int LLBC_RandInt(int begin, int end);
LLBC_EXTERN LLBC_EXPORT double LLBC_RandReal();

__LLBC_NS_END

#include "llbc/core/random/RandomImpl.h"

#endif // !__LLBC_CORE_RANDOM_RANDOM_H__
