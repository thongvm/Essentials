//
//  NSUUID+Essentials.h
//  Essentials
//
//  Created by Martin Kiss on 31.1.14.
//  Copyright (c) 2014 iAdverti. All rights reserved.
//

#import "Foundation+Essentials.h"





@interface NSUUID (Essentials)



+ (NSUUID *)UUIDWithData:(NSData *)data;
+ (NSUUID *)UUIDWithHexString:(NSString *)hexString;
+ (NSUUID *)UUIDWithBase64String:(NSString *)base64String;


- (NSData *)UUIDData;
- (NSString *)UUIDHexString;
- (NSString *)UUIDBase64String;



@end


