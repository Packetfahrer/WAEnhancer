//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class UIImage, UIWindow, WAChatBar;

@protocol WAChatBarDelegate <NSObject>
- (void)chatBarWantsToScrollToTop:(WAChatBar *)arg1;
- (void)chatBarUserDidFocusChatBar:(WAChatBar *)arg1;
- (void)chatBarDidMoveToWindow:(WAChatBar *)arg1;
- (void)chatBar:(WAChatBar *)arg1 willMoveToWindow:(UIWindow *)arg2;
- (void)chatBar:(WAChatBar *)arg1 didCancelPTTRecordingByUser:(BOOL)arg2;
- (void)chatBarDidEndPTTRecording:(WAChatBar *)arg1;
- (double)chatBarWillEndPTTRecording:(WAChatBar *)arg1;
- (void)chatBarDidBeginPTTRecording:(WAChatBar *)arg1;
- (BOOL)chatBarShouldBeginPTTRecording:(WAChatBar *)arg1;
- (void)chatBarDidChangeHeight:(WAChatBar *)arg1;
- (void)chatBarUserDidSubmitText:(WAChatBar *)arg1;
- (void)chatBarWantsToPresentCamera:(WAChatBar *)arg1;
- (void)chatBarWantsToAttachMedia:(WAChatBar *)arg1;
- (void)chatBar:(WAChatBar *)arg1 didPasteImage:(UIImage *)arg2;
- (void)chatBarDidChangeText:(WAChatBar *)arg1;
- (void)chatBarDidEndEditing:(WAChatBar *)arg1;
- (void)chatBarWillEndEditing:(WAChatBar *)arg1;
- (void)chatBarDidBeginEditing:(WAChatBar *)arg1;
- (BOOL)chatBarShouldBeginEditing:(WAChatBar *)arg1;
- (float)chatBarMaximumHeight:(WAChatBar *)arg1;
@end

