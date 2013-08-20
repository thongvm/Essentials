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
    else return arc4random_uniform(count);
}