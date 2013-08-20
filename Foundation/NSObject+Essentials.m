//
//  NSObject+Essentials.m
//  Essentials
//
//  Created by Martin Kiss on 7.6.13.
//  Copyright (c) 2013 iAdverti. All rights reserved.
//

#import "NSObject+Essentials.h"





@implementation NSObject (Essentials)





#pragma mark - Delayed Action


- (void)performAfter:(NSTimeInterval)seconds block:(void(^)(void))block {
    [[NSOperationQueue currentQueue] performSelector:@selector(addOperationWithBlock:) withObject:block afterDelay:seconds];
}





#pragma mark - Runtime Associations


- (id)associatedObjectForKey:(void *)key {
    return objc_getAssociatedObject(self, key);
}


- (id)associatedObjectForString:(NSString *const __autoreleasing *)string {
    return [self associatedObjectForKey:(void *)string];
}


- (void)setAssociatedObject:(id)object forKey:(void *)key policy:(objc_AssociationPolicy)policy {
    objc_setAssociatedObject(self, key, object, policy);
}


- (void)setAssociatedObject:(id)object forString:(NSString *const __autoreleasing *)string policy:(objc_AssociationPolicy)policy {
    [self setAssociatedObject:object forKey:(void *)string policy:policy];
}


- (void)setAssociatedStrongObject:(id)object forKey:(void *)key {
    [self setAssociatedObject:object forKey:key policy:OBJC_ASSOCIATION_RETAIN_NONATOMIC];
}


- (void)setAssociatedStrongObject:(id)object forString:(NSString *const __autoreleasing *)string {
    [self setAssociatedStrongObject:object forKey:(void *)string];
}


- (void)setAssociatedCopyObject:(id)object forKey:(void *)key {
    [self setAssociatedObject:object forKey:key policy:OBJC_ASSOCIATION_COPY_NONATOMIC];
}


- (void)setAssociatedCopyObject:(id)object forString:(NSString *const __autoreleasing *)string {
    [self setAssociatedCopyObject:object forKey:(void *)string];
}


- (void)setAssociatedAssignObject:(id)object forKey:(void *)key {
    [self setAssociatedObject:object forKey:key policy:OBJC_ASSOCIATION_ASSIGN];
}


- (void)setAssociatedAssignObject:(id)object forString:(NSString *const __autoreleasing *)string {
    [self setAssociatedAssignObject:object forKey:(void *)string];
}





#pragma mark - Null

- (BOOL)isNotNull {
    return (self != NSNull.null);
}





@end
