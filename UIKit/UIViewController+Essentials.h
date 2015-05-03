//
//  UIViewController+Essentials.h
//  Essentials
//
//  Created by Martin Kiss on 8.3.15.
//  Copyright (c) 2015 iAdverti. All rights reserved.
//

#import <UIKit/UIKit.h>





@interface UIViewController (Essentials)


//! Returns UINavigationController containing the receiver as the root. Inherits some properties.
- (UINavigationController *)wrappedInNavigationController;

//! Traverses presented View Controllers and returns the deepest one.
- (UIViewController *)deepestPresentedViewController;


@end


