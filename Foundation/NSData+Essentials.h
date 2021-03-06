//
//  NSData+Essentials.h
//  Essentials
//
//  Created by Martin Kiss on 4.12.13.
//  Copyright (c) 2013 iAdverti. All rights reserved.
//

#import "Foundation+Essentials.h"





@interface NSData (Essentials)


/// Returns new NSString created from the receiver using UTF-8 encoding.
@property (readonly) NSString *UTF8String;



+ (NSData *)dataWithHexadecimalString:(NSString *)hexString;

- (NSString *)hexadecimalString; // -hexString is already used by Foundation


/// Formats length using NSByteCountFormatter.
@property (readonly) NSString *formattedLength;



@end
