//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class WAPageableImageScrollView;

@protocol WAPageableImageScrollViewEditingDelegate <NSObject>
- (void)pageableImageScrollViewInteractiveCropModeChanged:(WAPageableImageScrollView *)arg1;
- (void)pageableImageScrollViewDidUpdateImage:(WAPageableImageScrollView *)arg1;
- (void)pageableImageScrollViewDidFinishEditingImage:(WAPageableImageScrollView *)arg1;
- (void)pageableImageScrollViewDeleteButtonTapped:(WAPageableImageScrollView *)arg1;
@end

