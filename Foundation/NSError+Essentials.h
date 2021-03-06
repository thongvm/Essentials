//
//  NSError+Essentials.h
//  Essentials
//
//  Created by Martin Kiss on 7.6.13.
//  Copyright (c) 2013 iAdverti. All rights reserved.
//

#import "Foundation+Essentials.h"





@interface NSError (Essentials)



/// Compose descriptions of the receiver with the underlaying error or exception.
- (NSString *)underlayingLocalizedDescription;


- (BOOL)isRecoverable;


- (instancetype)errorByAddingUserInfo:(NSDictionary<NSString *, id> *)userInfo;



@end
