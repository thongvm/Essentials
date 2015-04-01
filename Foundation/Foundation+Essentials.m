//
//  Foundation+Essentials.m
//  Essentials
//
//  Created by Martin Kiss on 14.8.13.
//  Copyright (c) 2013 iAdverti. All rights reserved.
//

#import "Foundation+Essentials.h"



NSUInteger NSUIntegerRandom(NSUInteger count) {
    if (count == NSUIntegerMax) return arc4random();
    else return arc4random_uniform((uint32_t)count);
}


NSTimeInterval const NSTimeIntervalInfinity = HUGE_VAL;


BOOL NSEqual(NSObject * A, NSObject * B) {
    return (A == B || (A && [B isEqual:A]));
}


BOOL NSStringEqual(NSString * A, NSString * B) {
    return (A == B || (A && [B isEqualToString:A]));
}


NSTimeInterval NSTimeIntervalRandom(NSTimeInterval minimum, NSTimeInterval granularity, NSTimeInterval maximum) {
    NSUInteger steps = ABS(maximum - minimum) / granularity;
    return minimum + NSUIntegerRandom(steps) * granularity;
}
