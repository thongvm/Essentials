//
//  UIView+Essentials.h
//  Essentials
//
//  Created by Martin Kiss on 7.6.13.
//  Copyright (c) 2013 iAdverti. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>





@interface UIView (Essentials)



#pragma mark - Snapshots
//TODO - drawViewHierarchyInRect

/// Returns snapshot of the receiver with screen scale.
- (UIImage *)snapshot;

/// Returns snapshot of the receiver with given scale.
- (UIImage *)snapshotWithScale:(CGFloat)scale;

/// Returns image view containing snapshot of the receiver.
- (UIImageView *)makeSnapshotImageView;

/// Creates snapshot image view and inserts it just above the receiver. This is intended to be invisible action for the user.
- (UIImageView *)overlayWithSnapshotImageView;



#pragma mark - Corner Radius

/// Forwards to the underlaying layer.
@property (nonatomic, readwrite) CGFloat cornerRadius;

/// Forwards to undelaying layer and sets rasterization scale to screen scale.
@property (nonatomic, readwrite, assign) BOOL shouldRasterize;



#pragma mark - Geometry

/// Rotation around Z axis in degrees!
@property (nonatomic) CGFloat rotation;

/// X and Y scale, when they differ, geometric average is returned (√XY).
@property (nonatomic) CGFloat scale;

/// X and Y scales separately.
@property (nonatomic) CGSize scales;

/// Translation from .transform
@property (nonatomic) CGPoint translation;



#pragma mark - Shadow

/// Wraps all shadow attributes in single object. Color is premultiplied by alpha, since NSShadow doesn't have opacity property.
@property (nonatomic, readwrite) NSShadow *shadow;

/// Forwards to the underlaying layer, transforms CGSize to UIOffset.
@property (nonatomic, readwrite) UIOffset shadowOffset;

/// Forwards to the underlaying layer, transforms color classes.
@property (nonatomic, readwrite) UIColor *shadowColor;

/// Forwards to the underlaying layer.
@property (nonatomic, readwrite) CGFloat shadowBlurRadius;

/// Forwards to the underlaying layer.
@property (nonatomic, readwrite) CGFloat shadowAlpha;

/// Forwards to the underlaying layer, transforms CGPathRef to UIBezierPath and vice versa.
@property (nonatomic, readwrite) UIBezierPath *shadowPath;



#pragma mark - Border

@property (nonatomic, readwrite) CGFloat borderWidth;

@property (nonatomic, readwrite) UIColor *borderColor;



#pragma mark - Structs Adjustments

/// Allows you to quickly adjust frame.
- (void)adjustFrame:(void(^)(CGRect *frame))block;

/// Allows you to quickly adjust bounds.
- (void)adjustBounds:(void(^)(CGRect *bounds))block;

/// Allows you to quickly adjust center.
- (void)adjustCenter:(void(^)(CGPoint *center))block;

/// Allows you to quickly adjust transform.
- (void)adjustTransform:(CGAffineTransform(^)(CGAffineTransform transform))block;



/// Recursively enuemerates all subviews.
- (void)enumerateSubviewsRecursivelyWithBlock:(void (^)(UIView *view, BOOL *stop))block;



#pragma mark - Interaction

- (void)addVerticalMotionEffectWithIntensity:(CGFloat)intensity;
- (void)addHorizontalMotionEffectWithIntensity:(CGFloat)intensity;


#pragma mark - Debugging

- (void)debugDisplayBackgrounds;
- (void)debugDisplayBorders;
+ (void)debugGuardMainThread;




@end
