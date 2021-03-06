//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class NSMutableDictionary, UIView, UIViewController;

@protocol WAImageToImageTransitioning <NSObject>
- (void)finishTransitionWithView:(UIView *)arg1 context:(NSMutableDictionary *)arg2;
- (UIView *)viewForTransitionAnimationWithContext:(NSMutableDictionary *)arg1;
- (void)prepareForTransitionWithContext:(NSMutableDictionary *)arg1;
- (BOOL)shouldUseImageToImageTransitionForOperation:(int)arg1 fromViewController:(UIViewController *)arg2 toViewController:(UIViewController *)arg3 context:(NSMutableDictionary *)arg4;
@end

