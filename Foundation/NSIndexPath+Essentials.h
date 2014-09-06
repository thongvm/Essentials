//
//  NSIndexPath+Essentials.h
//  Essentials
//
//  Created by Martin Kiss on 11.7.14.
//  Copyright (c) 2014 iAdverti. All rights reserved.
//

#import <Foundation/Foundation.h>



@interface NSIndexPath (Essentials)


#pragma mark - Multiple

+ (NSArray *)indexPathsFromRowsInIndexSet:(NSIndexSet *)indexes inSection:(NSUInteger)section;
+ (NSArray *)indexPathsFromRowsInRange:(NSRange)range inSection:(NSUInteger)section;


@end

