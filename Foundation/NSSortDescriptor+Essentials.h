//
//  NSSortDescriptor+Essentials.h
//  Essentials
//
//  Created by Martin Kiss on 11.4.14.
//  Copyright (c) 2014 iAdverti. All rights reserved.
//

#import <Foundation/Foundation.h>



typedef enum : BOOL {
    ESSSortDescending = NO,
    ESSSortAscending = YES,
} ESSSort;



@interface NSSortDescriptor (Essentials)


+ (instancetype)sortAscending:(BOOL)ascending;
+ (instancetype)sortAscending:(BOOL)ascending selector:(SEL)selector;

+ (instancetype)randomSortDescriptor;

+ (instancetype)sortDescriptorForViewOriginX;
+ (instancetype)sortDescriptorForViewOriginY;


@end



#define ESSSort(Class, keyPath, ascend, compareSelector) \
(NSSortDescriptor *)({ \
    if (NO) { \
        Class *object = nil; \
        __unused NSComparisonResult r = [object.keyPath compareSelector object.keyPath]; \
    } \
    SEL selector = NSSelectorFromString(@#compareSelector); \
    [NSSortDescriptor sortDescriptorWithKey:@#keyPath ascending:ESSSort##ascend selector:selector]; \
})

